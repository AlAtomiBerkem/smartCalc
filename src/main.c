#include "s21_smart_calc.h"

cod_error s21_parser(char *string, s21_stack **parser_stack) {
  int check_unar = 1;
  cod_error result = ERROR_NULL;
  while (*string && result == ERROR_NULL) {
    if (*string >= '0' && *string <= '9') {
      check_unar = 0;
      double val = strtod(string, &string);
      push_stack(create_node(NUMBER_X_PR, val, NUMBER), parser_stack);
    } else if (*string == 'x' || *string == 'X') {
      string++;
      check_unar = 0;
      push_stack(create_node(NUMBER_X_PR, 0, X), parser_stack);
    } else if (*string == '+' && check_unar == 0) {
      string++;
      check_unar = 1;
      push_stack(create_node(PLUS_MINUS_PR, 0, PLUS), parser_stack);
    } else if (*string == '-' && check_unar == 0) {
      string++;
      check_unar = 1;
      push_stack(create_node(PLUS_MINUS_PR, 0, MINUS), parser_stack);
    } else if (*string == '+' && check_unar == 1) {
      string++;
      check_unar = 1;
      push_stack(create_node(UNAR_P_M_PR, 0, UNAR_PLUS), parser_stack);
    } else if (*string == '-' && check_unar == 1) {
      string++;
      check_unar = 1;
      push_stack(create_node(UNAR_P_M_PR, 0, UNAR_MINUS), parser_stack);
    } else if (*string == '*') {
      string++;
      check_unar = 1;
      push_stack(create_node(UMN_DEL_MOD_PR, 0, UMN), parser_stack);
    } else if (*string == '/') {
      string++;
      check_unar = 1;
      push_stack(create_node(UMN_DEL_MOD_PR, 0, DELENIE), parser_stack);
    } else if (*string == '%') {
      string++;
      check_unar = 1;
      push_stack(create_node(UMN_DEL_MOD_PR, 0, MOD), parser_stack);
    } else if (*string == '^') {
      string++;
      check_unar = 1;
      push_stack(create_node(STEPEN_PR, 0, POW), parser_stack);
    } else if (*string == '(') {
      string++;
      check_unar = 1;
      push_stack(create_node(STAPLE_PR, 0, BKT_LEFT), parser_stack);
    } else if (*string == ')') {
      string++;
      check_unar = 0;
      push_stack(create_node(STAPLE_PR, 0, BKT_RIGHT), parser_stack);
    } else if (check_func(string, "cos(", 4)) {
      string += 3;
      check_unar = 1;
      push_stack(create_node(FUNC_PR, 0, COS), parser_stack);
    } else if (check_func(string, "sin(", 4)) {
      string += 3;
      check_unar = 1;
      push_stack(create_node(FUNC_PR, 0, SIN), parser_stack);
    } else if (check_func(string, "mod", 3)) {
      string += 3;
      check_unar = 1;
      push_stack(create_node(FUNC_PR, 0, MOD), parser_stack);
    } else if (check_func(string, "tan(", 4)) {
      string += 3;
      check_unar = 1;
      push_stack(create_node(FUNC_PR, 0, TAN), parser_stack);
    } else if (check_func(string, "acos(", 5)) {
      string += 4;
      check_unar = 1;
      push_stack(create_node(FUNC_PR, 0, ACOS), parser_stack);
    } else if (check_func(string, "asin(", 5)) {
      string += 4;
      check_unar = 1;
      push_stack(create_node(FUNC_PR, 0, ASIN), parser_stack);
    } else if (check_func(string, "atan(", 5)) {
      string += 4;
      check_unar = 1;
      push_stack(create_node(FUNC_PR, 0, ATAN), parser_stack);
    } else if (check_func(string, "sqrt(", 5)) {
      string += 4;
      check_unar = 1;
      push_stack(create_node(FUNC_PR, 0, SQRT), parser_stack);
    } else if (check_func(string, "log(", 4)) {
      string += 3;
      check_unar = 1;
      push_stack(create_node(FUNC_PR, 0, LOG), parser_stack);
    } else if (check_func(string, "ln(", 3)) {
      string += 2;
      check_unar = 1;
      push_stack(create_node(FUNC_PR, 0, LN), parser_stack);
    } else {
      result = ERROR_PARSER;
    }
  }
  return result;
}

int check_func(const char *input_string, const char *string_to_check, int size) {
  int status = 1;
  for (int i = 0; i < size; ++i) {
    if (*(input_string + i) != *(string_to_check + i)) status = 0;
  }
  return status;
}

cod_error staple(char *string) {
  cod_error res = ERROR_NULL;

  short int open_staple = 0;
  short int close_staple = 0;

  for (size_t i = 0; i < strlen(string) && res == ERROR_NULL; ++i) {
    if (string[i] == '(') {
      ++open_staple;
    } else if (string[i] == ')' && open_staple != 0) {
      ++close_staple;
    } else if ((string[i] == ')' && open_staple == 0)) {
      res = ERROR_STAPLE;
    }
  }
  if (open_staple != close_staple) {
    res = ERROR_STAPLE;
  }

  return res;
}

s21_stack *create_node(priority_t priority, double number, type_t simbol) {
  s21_stack *node;
  node = (s21_stack *)calloc(sizeof(s21_stack), 1);
  if (node != NULL) {
    node->number = number;
    node->priority = priority;
    node->simbol = simbol;
    node->next_pointer = NULL;
  }
  return node;
}

void push_stack(s21_stack *node, s21_stack **head) {
  if (*head != NULL) {
    node->next_pointer = *head;
  }
  *head = node;
}

cod_error pop_stack(s21_stack **head) {
  cod_error res = ERROR_NULL;
  if (*head != NULL) {
    s21_stack *free_stack = *head;
    *head = free_stack->next_pointer;
    free(free_stack);
  } else
    res = ERROR_1;
  return res;
}

#include <stdlib.h>
int main() {
  // s21_stack *input = NULL;
  // push_stack(create_node(1, 1, COS), &input);
  char *string = "23+34-cos(4^3)-+2\0";
//   char *string = "23\0";
  s21_stack *parser_stack = NULL;
  //   printf("123\n");
  cod_error res = s21_parser(string, &parser_stack);
    s21_transfer_stack(&parser_stack);
    
  if (res == ERROR_NULL)
    parser_print(parser_stack);
  else
    printf("ERROR");
//     while (parser_stack != NULL)
//     {
//         s21_stack *tmp = parser_stack;
//         parser_stack = parser_stack->next_pointer;
//         free(tmp)
//     }
    
  // return parser_print;
}

void parser_print(s21_stack *stack) {
  while (stack != NULL) {
    printf("%f\t%d\t%d\n", stack->number, stack->simbol, stack->priority);
    stack = stack->next_pointer;
  }
}

cod_error s21_transfer_stack(s21_stack **input_stack) {
s21_stack *output_stack = NULL;
while(*input_stack != NULL) {
push_stack(create_node((*input_stack)->priority,(*input_stack)->number,(*input_stack)->simbol), &output_stack);
pop_stack(input_stack);
    }
*input_stack = output_stack;

}

cod_error s21_revers_polish_notation(s21_stack *rpn_stack, s21_stack **rpn_result) {
s21_stack *temp_simbol_stack = NULL;

while (rpn_stack != NULL) {
if(rpn_stack->priority == NUMBER_X_PR ) {
    push_stack(create_node(rpn_stack->priority,rpn_stack->number,rpn_stack->simbol), rpn_result);
    pop_stack(&rpn_stack);
        }
if()
    }

}

