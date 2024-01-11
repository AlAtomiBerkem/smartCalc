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

int check_func(const char *input_string, const char *string_to_check,
               int size) {
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

// #include <stdlib.h>
// int main() {
//   s21_stack *input = NULL;
//   push_stack(create_node(1, 1, COS), &input);
//   char *string = "23+34-cos(4^3)-+2\0";
// //   char *string = "23\0";
//   s21_stack *parser_stack = NULL;
//   s21_stack *ready_stack = NULL;
//   //   printf("123\n");
//   cod_error res = s21_parser(string, &parser_stack);
//     s21_transfer_stack(&parser_stack);

//   if (res == ERROR_NULL)
//     parser_print(parser_stack);
//   else
//     printf("ERROR");
//    cod_error s21_revers_polish_notation(s21_stack *parser_stack, s21_stack
//    *ready_stack);
//     while (parser_stack != NULL)
//     {
//         s21_stack *tmp = parser_stack;
//         parser_stack = parser_stack->next_pointer;
//         free(tmp);
//     }

//   return parser_print;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//   // Ваш код для создания parser_stack, наполнения его данными из строки,
//   // инициализации ready_stack

//   // Ваш код для заполнения parser_stack
// char *string = "23+34-cos(4^3)-+2\0";
// //   char *string = "23\0";
// s21_stack *parser_stack = NULL;
// s21_stack *ready_stack = NULL;
// //   printf("123\n");
// cod_error res = s21_parser(string, &parser_stack);
// s21_transfer_stack(&parser_stack);
// // Вызов функции s21_revers_polish_notation для сортировки стека
// cod_error result = s21_revers_polish_notation(parser_stack,
// &ready_stack);

// // Проверка на ошибку
// if (result != ERROR_NULL) {
//   printf("Error occurred during sorting!");
//   return 1;
// }

// // Вывод содержимого отсортированного стека ready_stack с помощью printf
// printf("Sorted stack contents:\n");
// while (ready_stack != NULL) {
//   printf("Priority: %d, Number: %lf, Symbol: %c\n", ready_stack->priority,
//          ready_stack->number, ready_stack->simbol);
//   ready_stack = ready_stack->next_pointer;
// }

//   return 0;
// }

void parser_print(s21_stack *stack) {
  while (stack != NULL) {
    printf("%f\t%d\t%d\n", stack->number, stack->simbol, stack->priority);
    stack = stack->next_pointer;
  }
}

cod_error s21_transfer_stack(s21_stack **input_stack) {
  s21_stack *output_stack = NULL;
  while (*input_stack != NULL) {
    push_stack(create_node((*input_stack)->priority, (*input_stack)->number,
                           (*input_stack)->simbol),
               &output_stack);
    pop_stack(input_stack);
  }
  *input_stack = output_stack;
}

// cod_error s21_revers_polish_notation(s21_stack *rpn_stack,
//                                      s21_stack **rpn_result) {
//   s21_stack *temp_simbol_stack = NULL;
//   cod_error res = ERROR_NULL;
//   while (rpn_stack != NULL) {
//     if (rpn_stack->priority == NUMBER_X_PR) {
//       push_stack(create_node(rpn_stack->priority, rpn_stack->number,
//                              rpn_stack->simbol),
//                  &temp_simbol_stack);
//       pop_stack(&rpn_stack);
//     } else if (rpn_stack->simbol == BKT_LEFT) {
//       push_stack(create_node(rpn_stack->priority, rpn_stack->number,
//                              rpn_stack->simbol),
//                  &temp_simbol_stack);
//       pop_stack(&rpn_stack);
//     } else if (rpn_stack->simbol == BKT_RIGHT) {
//       while (
//         // temp_simbol_stack != NULL &&
//              temp_simbol_stack->simbol != BKT_LEFT) {
//         push_stack(
//             create_node(temp_simbol_stack->priority, temp_simbol_stack->number,
//                         temp_simbol_stack->simbol),
//             rpn_result);
//         pop_stack(&temp_simbol_stack);
//       }
//       pop_stack(&temp_simbol_stack);  // Удаление левой скобки
//       pop_stack(&rpn_stack);  // Удаление правой скобки
//     } else if (temp_simbol_stack == NULL) {
//       push_stack(create_node(rpn_stack->priority, rpn_stack->number,
//                              rpn_stack->simbol),
//                  &temp_simbol_stack);
//       pop_stack(&rpn_stack);
//     } else {
//       while (temp_simbol_stack != NULL &&
//              temp_simbol_stack->priority >= rpn_stack->priority) {
//         push_stack(
//             create_node(temp_simbol_stack->priority, temp_simbol_stack->number,
//                         temp_simbol_stack->simbol),
//             rpn_result);
//         pop_stack(&temp_simbol_stack);
//       }
//       push_stack(create_node(rpn_stack->priority, rpn_stack->number,
//                              rpn_stack->simbol),
//                  &temp_simbol_stack);
//       pop_stack(&rpn_stack);
//     }
//   }
//   while (temp_simbol_stack != NULL) {
//     if (temp_simbol_stack->simbol == BKT_LEFT) {
//       res = ERROR_RPN;  // Найдена лишняя левая скобка
//       break;
//     }
//     push_stack(
//         create_node(temp_simbol_stack->priority, temp_simbol_stack->number,
//                     temp_simbol_stack->simbol),
//         rpn_result);
//     pop_stack(&temp_simbol_stack);
//   }
//   parser_print(*rpn_result);
//   printf("\n");
//   return res;
// }

cod_error s21_revers_polish_notation(s21_stack *rpn_stack,
                                     s21_stack **rpn_result) {
  s21_stack *temp_simbol_stack = NULL;
  cod_error res = ERROR_NULL;
  while (rpn_stack != NULL) {
    
    if (rpn_stack->priority == NUMBER_X_PR) {
      push_stack(create_node(rpn_stack->priority, rpn_stack->number,
                             rpn_stack->simbol),
                 rpn_result);
      pop_stack(&rpn_stack);
    } else if (rpn_stack->simbol == BKT_LEFT) {
      
      push_stack(create_node(rpn_stack->priority, rpn_stack->number,
                             rpn_stack->simbol),
                 &temp_simbol_stack);
      pop_stack(&rpn_stack);
    } else if (rpn_stack->simbol == BKT_RIGHT) {
      while (
        // temp_simbol_stack != NULL &&
             temp_simbol_stack->simbol != BKT_LEFT) {
        push_stack(
            create_node(temp_simbol_stack->priority, temp_simbol_stack->number,
                        temp_simbol_stack->simbol),
            rpn_result);
        pop_stack(&temp_simbol_stack);
      }
      pop_stack(&temp_simbol_stack);  // Удаление левой скобки
      pop_stack(&rpn_stack);  // Удаление правой скобки
    } else if (temp_simbol_stack == NULL) {
      push_stack(create_node(rpn_stack->priority, rpn_stack->number,
                             rpn_stack->simbol),
                 &temp_simbol_stack);
      pop_stack(&rpn_stack);
    } else {
      while (temp_simbol_stack != NULL &&
             temp_simbol_stack->priority >= rpn_stack->priority) {
        push_stack(
            create_node(temp_simbol_stack->priority, temp_simbol_stack->number,
                        temp_simbol_stack->simbol),
            rpn_result);
        pop_stack(&temp_simbol_stack);
      }
      push_stack(create_node(rpn_stack->priority, rpn_stack->number,
                             rpn_stack->simbol),
                 &temp_simbol_stack);
      pop_stack(&rpn_stack);
    }
  }
  while (temp_simbol_stack != NULL) {
    if (temp_simbol_stack->simbol == BKT_LEFT) {
      res = ERROR_RPN;  // Найдена лишняя левая скобка
      break;
    }
    push_stack(
        create_node(temp_simbol_stack->priority, temp_simbol_stack->number,
                    temp_simbol_stack->simbol),
        rpn_result);
    pop_stack(&temp_simbol_stack);
  }
  return res;
}

void calc_push(s21_stack **head, double number, priority_t priority,
               type_t simbol) {
  s21_stack *tmp = (s21_stack *)calloc(1, sizeof(s21_stack));
  tmp->number = number;
  tmp->simbol = simbol;
  tmp->priority = priority;
  tmp->next_pointer = (*head);
  (*head) = tmp;
}

cod_error calculate_funcs(s21_stack **number_stack,
                          s21_stack **operator_stack) {
  cod_error res = ERROR_NULL;
  int A = 2;
  double ready_result = 0;

  if ((*operator_stack)->simbol >= COS) A = 1;
  if ((*operator_stack)->simbol == MINUS)
    ready_result =
        (*number_stack)->next_pointer->number - (*number_stack)->number;
  else if ((*operator_stack)->simbol == PLUS)
    ready_result =
        +(*number_stack)->next_pointer->number + (*number_stack)->number;
  else if ((*operator_stack)->simbol == DELENIE)
    ready_result =
        (*number_stack)->next_pointer->number / (*number_stack)->number;
  else if ((*operator_stack)->simbol == UMN)
    ready_result =
        (*number_stack)->next_pointer->number * (*number_stack)->number;
  else if ((*operator_stack)->simbol == POW)
    ready_result =
        pow((*number_stack)->next_pointer->number, (*number_stack)->number);
  else if ((*operator_stack)->simbol == MOD)
    ready_result =
        fmod((*number_stack)->next_pointer->number, (*number_stack)->number);
  else if ((*operator_stack)->simbol == COS)
    ready_result = cos((*number_stack)->number);
  else if ((*operator_stack)->simbol == TAN)
    ready_result = tan((*number_stack)->number);
  else if ((*operator_stack)->simbol == SIN)
    ready_result = sin((*number_stack)->number);
  else if ((*operator_stack)->simbol == ACOS)
    ready_result = acos((*number_stack)->number);
  else if ((*operator_stack)->simbol == ATAN)
    ready_result = atan((*number_stack)->number);
  else if ((*operator_stack)->simbol == ASIN)
    ready_result = asin((*number_stack)->number);
  else if ((*operator_stack)->simbol == SQRT)
    ready_result = sqrt((*number_stack)->number);
  else if ((*operator_stack)->simbol == LN)
    ready_result = log((*number_stack)->number);
  else if ((*operator_stack)->simbol == LOG)
    ready_result = log10((*number_stack)->number);
  pop_stack(operator_stack);
  for (int i = 0; i < A; i++) pop_stack(number_stack);
  calc_push(number_stack, ready_result, NUMBER_X_PR, NUMBER);
  return res;
}

cod_error ready_calculate(s21_stack *ready, double *result) {
  cod_error res = ERROR_NULL;
  s21_stack *number_stack = NULL, *operator_stack = NULL;
  // parser_print(ready);
  while (ready != NULL && res == ERROR_NULL) {
    if (ready->priority <= 0) {
      calc_push(&number_stack, ready->number, ready->priority, ready->simbol);
    } else {
      calc_push(&operator_stack, ready->number, ready->priority, ready->simbol);
    }
    pop_stack(&ready);
    if (operator_stack != NULL && number_stack == NULL)
      res = CALCULATION_ERROR;
    else if (operator_stack != NULL) {
            if (operator_stack->simbol >= COS) {
        res = calculate_funcs(&number_stack, &operator_stack);
      } else {
        if (number_stack->next_pointer == NULL)
          res = CALCULATION_ERROR;
        else {
          res = calculate_funcs(&number_stack, &operator_stack);
        }
      }
      // if (operator_stack->simbol >= COS ||
      //     (number_stack->next_pointer == NULL &&
      //      operator_stack->simbol != MINUS)) {
      //   res = calculate_funcs(&number_stack, &operator_stack);
      // }
    }
  }

  if (res == ERROR_NULL) {
    *result = (number_stack != NULL)
                  ? number_stack->number
                  : 0;  // Если стек не пуст, записываем значение, иначе 0
    while (number_stack != NULL) pop_stack(&number_stack);
    while (operator_stack != NULL) pop_stack(&operator_stack);
    if (number_stack != NULL || operator_stack != NULL) {
      res = CALCULATION_ERROR;
    }
  }
  return res;
}

cod_error smart_calc(char *input_str, double x, double *result) {
  char new_str[300] = "\0";
  cod_error res = ERROR_NULL;
  s21_stack *parts = NULL;
  s21_stack *ready = NULL;
  if (res == ERROR_NULL) res = s21_parser(input_str, &parts);
  if (res == ERROR_NULL) {
    s21_transfer_stack(&parts);
    res = s21_revers_polish_notation(parts, &ready);
    
  }
  if (res == ERROR_NULL) {
    
    s21_transfer_stack(&ready);
    res = ready_calculate(ready, result);
  }
  return res;
}
// cod_error smart_calc(char *input_str, double x, double *result) {
//   char new_str[300] = "\0";
//   cod_error res = ERROR_NULL;
//   s21_stack *parts = NULL;
//   s21_stack *ready = NULL;

//   res = s21_parser(input_str, &parts);
//   if (res != ERROR_NULL) {
//     return res;
//   }
//   res = s21_revers_polish_notation(parts, &ready);
//   if (res != ERROR_NULL) {
//     return res;
//   }
//   //s21_transfer_stack(&ready);
//   res = ready_calculate(ready, result);
//   if (res != ERROR_NULL) {
//     return res;
//   }

//   return res;
// }

#include <stdio.h>
#include <stdlib.h>

int main() {
  char *string =
      "21+21-21*21/21^2%21";  // Входное математическое выражение // 23+34-cos(4^3)-+2\0
  // char *string = "6-5+1+2"; // Входное математическое выражение //
  // 23+34-cos(4^3)-+2\0
  double result = 0.0;
  cod_error res =
      smart_calc(string, 0, &result);  // Вычисление результата выражения

  if (res == ERROR_NULL) {
    printf("Результат: %lf\n", result);  // Вывод результата
  } else {
    printf("Произошла ошибка при вычислении!\n");
  }

  return 0;
}
