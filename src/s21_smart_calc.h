
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
    ERROR_RPN = 4,
    CALCULATION_ERROR = 5,
    CREDIT_ERROR = 6,
    TRANSFER_ERROR = 7,
    RE_CALK_ERROR = 8,
} cod_error;

typedef enum {
    STAPLE_PR = -1,
    NUMBER_X_PR = 0,
    PLUS_MINUS_PR = 1,
    UMN_DEL_MOD_PR = 2,
    STEPEN_PR = 3,
    FUNC_PR = 4,
    UNAR_P_M_PR = 5,
    } priority_t;

typedef enum { MONTH = 1, YEAR = 12, HALF_YEAR = 6, QUARTER = 3 } payments_type;

typedef enum { ON = 1, OFF = 0 } capitalization_type;

  typedef struct deposit {
  double summ;
  int month;
  double interest_rate;
  double tax_rate;
  payments_type payment_period;
  capitalization_type capitalization;
  int dates_of_adding[3];
  double sizes_of_adding[3];
  int dates_of_remove[3];
  double size_of_remove[3];
} deposit_t;

typedef struct s21_stack {
    priority_t priority;
    double number;
    type_t simbol;
    struct s21_stack *next_pointer;
    } s21_stack;

typedef enum { DIFF = 0, ANNUITY = 1 } creadit_type;

cod_error s21_parser(char *string, s21_stack **parser_stack);
//cod_error s21_transfer_stack(s21_stack **head);
cod_error s21_transfer_stack(s21_stack **input_stack);
cod_error s21_revers_polish_notation(s21_stack *rpn_stack, s21_stack **rpn_result);
//cod_error s21_calculate(s21_stack ready_result);
cod_error calculate_funcs(s21_stack **number_stack, s21_stack **operator_stack);
void calc_push(s21_stack **head, double number, priority_t priority, type_t simbol);
s21_stack *create_node(priority_t priority, double number, type_t simbol);
void push_stack(s21_stack *node, s21_stack **head );
cod_error pop_stack(s21_stack **head);
cod_error staple(char *string);
cod_error ready_calculate(s21_stack *ready, double *result);
void parser_print(s21_stack *stack);
int check_func(const char* input_string, const char* string_to_check, int size);
int smart_calc(char *input_str, char* x, double *result);
cod_error deposit_calc(deposit_t *depos, double *diff, double *tax_sum, double *final_sum);
cod_error credit_calc(double summ, int month, double interest_rate,
                   creadit_type type, double *month_payment_min,
                   double *month_payment_max, double *total_payment,
                   double *over_payment);
void credit_diff(double summ, int month, double interest_rate,
                 double *month_payment_min, double *month_payment_max,
                 double *total_payment, double *over_payment);
void creadit_ann(double summ, int month, double interest_rate,
                 double *month_payment_min, double *month_payment_max,
                 double *total_payment, double *over_payment);
