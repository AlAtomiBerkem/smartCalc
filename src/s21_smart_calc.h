#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef enum {
    NUMBER = -1,
    X = 0,
    PLUS = 1,
    MINUS = 2,
    DELENIE = 3,
    UMN = 4,
    UNAR_PLUS = 5,
    UNAR_MINUS = 6,
    MOD = 7,
    COS = 8,
    SIN = 9,
    TAN = 10,
    ACOS = 11,
    ASIN = 12,
    ATAN = 13,
    SQRT = 14,
    LN = 15,
    LOG = 16,
    BKT_LEFT = 17,
    BKT_RIGHT = 18,
    POW = 19,
} type_t;

typedef enum {
    ERROR_NULL = 0,
    ERROR_1 = 1,
    ERROR_PARSER = 2,
    ERROR_STAPLE = 3,
} cod_error;

typedef enum {
    STAPLE_PR = -1,
    NUMBER_X_PR = 1,
    PLUS_MINUS_PR = 2,
    UMN_DEL_MOD_PR = 3,
    STEPEN_PR = 4,
    FUNC_PR = 5,
    UNAR_P_M_PR = 6,
    } priority_t;

typedef struct s21_stack {
    priority_t priority;
    double number;
    type_t simbol;
    struct s21_stack *next_pointer;
    } s21_stack;

cod_error s21_parser(char *string, s21_stack **parser_stack);
cod_error s21_transfer_stack(s21_stack **input_stack);
cod_error s21_revers_polish_notation(s21_stack *rpn_stack, s21_stack **rpn_result);
cod_error s21_calculate(s21_stack ready_result);
s21_stack *create_node(priority_t priority, double number, type_t simbol);
void push_stack(s21_stack *node, s21_stack **head );
cod_error pop_stack(s21_stack **head);
cod_error staple(char *string);
void parser_print(s21_stack *stack);
int check_func(const char* input_string, const char* string_to_check, int size);