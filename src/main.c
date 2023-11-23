#include"s21_smart_calc.h"

cod_error s21_parser(char *string, s21_stack **parser_stack) {
int check_unar = 1;
cod_error result = ERROR_NULL;
while (string && result == ERROR_NULL) {
    if(*string >= '0' && *string <= '9') {
        check_unar = 0;
        double val = strtod(string, &string);
        push_stack(create_node(NUMBER_X_PR, val, NUMBER), parser_stack);
    }
    else if (*string == 'x' || *string == 'X') {
        string ++;
        check_unar = 0;
        push_stack(create_node(NUMBER_X_PR, 0, X), parser_stack);
    }
    else if (*string == '+' && check_unar == 0) {
        string ++;
        check_unar = 1;
        push_stack(create_node(PLUS_MINUS_PR, 0, PLUS), parser_stack);
    }
    else if (*string == '-' && check_unar == 0) {
         string ++;
         check_unar = 1;
         push_stack(create_node(PLUS_MINUS_PR, 0, MINUS), parser_stack);
    }
    else if (*string == '+' && check_unar == 1) {
     string ++;
     check_unar = 1;
     push_stack(create_node(UNAR_P_M_PR, 0, UNAR_PLUS), parser_stack);
    } 
    else if (*string == '-' && check_unar == 1) {
         string ++;
         check_unar = 1;
         push_stack(create_node(UNAR_P_M_PR, 0, UNAR_MINUS), parser_stack);
    }
    else if (*string == '*') {
      string ++;
      check_unar = 1;
      push_stack(create_node(UMN_DEL_MOD_PR, 0, UMN), parser_stack);
    }
    else if (*string == '/') {
         string ++;
         check_unar = 1;
         push_stack(create_node(UMN_DEL_MOD_PR, 0, DELENIE), parser_stack);
    }
    else if (*string == '%') {
         string ++;
         check_unar = 1;
         push_stack(create_node(UMN_DEL_MOD_PR, 0, MOD), parser_stack);
    }
    else if (*string == '^') {
         string ++;
         check_unar = 1;
         push_stack(create_node(STEPEN_PR, 0, POW), parser_stack);
    }
    else if (*string == '(') {
         string ++;
         check_unar = 1;
         push_stack(create_node(), parser_stack);
    }
    else if (*string == ')') {
         string ++;
         check_unar = 0;
         push_stack(create_node(), parser_stack);
    }
    else if (strncmp(string, 'cos(', 4)) {
         string += 3;
         check_unar = 1;
         push_stack(create_node(), parser_stack);
    }
    else if (strncmp(string, 'sin(', 4)) {
        string += 3;
        check_unar = 1;
        push_stack(create_node(), parser_stack);
    }
    else if (strncmp(string, 'mod', 3)) {
        string += 3;
        check_unar = 1;
        push_stack(create_node(), parser_stack);
    }
    else if (strncmp(string, 'tan(', 4)) {
        string += 3;
        check_unar = 1;
        push_stack(create_node(), parser_stack);
    }
    else if (strncmp(string, 'acos(', 5)) {
        string += 4;
        check_unar = 1;
        push_stack(create_node(), parser_stack);
    }
    else if (strncmp(string, 'asin(', 5)) {
        string += 4;
        check_unar = 1;
        push_stack(create_node(), parser_stack);
    }
    else if (strncmp(string, 'atan(', 5)) {
        string += 4;
        check_unar = 1;
        push_stack(create_node(), parser_stack);
    }
    else if (strncmp(string, 'sqrt(', 5)) {
        string += 4;
        check_unar = 1;
        push_stack(create_node(), parser_stack);
    }
    else if (strncmp(string, 'log(', 4)) {
        string += 3;
        check_unar = 1;
        push_stack(create_node(), parser_stack);
    }
    else if (strncmp(string, 'ln(', 3)) {
        string += 2;
        check_unar = 1;
        push_stack(create_node(), parser_stack);
    }
    else result = ERROR_PARSER;
    }
}



cod_error staple(char *string) {
cod_error res = ERROR_NULL;

short int open_staple = 0;
short int close_staple = 0;

for(size_t i = 0; i < strlen(string) && res == ERROR_NULL; ++i) {
    if (string[i] == '('){
        ++open_staple;
    } else if (string[i] == ')' && open_staple != 0) {
        ++close_staple;
    } else if ((string[i] == ')' && open_staple == 0)) {
        res = ERROR_1;
    }
}
if (open_staple != close_staple) {
    res = ERROR_1;
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

void push_stack(s21_stack *node, s21_stack **head ) {
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
 } else res = ERROR_1;
 return res;
}


// #include <stdlib.h>
int main() {
    s21_stack *input = NULL;
    push_stack(create_node(1, 1, COS), &input);
}



// int main() {
//     char num[256] = "";
//     int i = 0;

// char *b = malloc(256);
// strcpy(b,"12376+256");
// while (*b != '\0') {
//     if (*b >= '0' && *b <= '9') {
//         while (*b >= '0' && *b <= '9' || *b == '.') {
//             num[i] = *b;
//             i ++;
//             b ++;
//             num[i] = '\0'; 
//         } 
//     }
//     i = 0;
//    double res = atof(num);
//     printf ("%f\n", res);
//     b ++;
// } 

// return 0;
// }