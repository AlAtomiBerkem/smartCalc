#ifndef SMART_CALC_H
#define SMART_CALC_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define is_digit(x) (x >= '0' && x <= '9')

typedef enum {
  OK = 0,
  VALIDATE_ERROR = 1,
  POP_ERROR = 2,
  CREATE_ERROR = 3,
  CALCULATION_ERROR = 4,
  RPN_ERROR = 5,
  DEPOSIT_ERROR = 6,
  CREDIT_ERROR = 7
} errors;

typedef enum {
  BKT_PRIORITY = -1,
  DIGIT_X_PRIORITY = 0,
  PLUS_MINUS_PRIORITY = 1,
  DIV_MOD_MUT_PRIORITY = 2,
  POW_PRIORITY = 3,
  FUNCS_PRIORITY = 4
} op_priority;

typedef enum {
  DIGIT = 1,
  X = 2,
  MINUS = 3,
  PLUS = 4,
  DIV = 5,
  MULT = 6,
  POW = 7,
  MOD = 8,
  COS = 9,
  SIN = 10,
  TAN = 11,
  ACOS = 12,
  ASIN = 13,
  ATAN = 14,
  SQRT = 15,
  LN = 16,
  LOG = 17,
  BKT_LEFT = 18,
  BKT_RIGHT = 19
} lex_type;

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

typedef enum { DIFF = 0, ANNUITY = 1 } creadit_type;

typedef struct node {
  double value;
  op_priority priority;
  lex_type type;
  struct node *next;
} t_stack;

errors validate(char *str, char *new_str);
errors parser(t_stack **head, char *str, double x_value);
errors s21_rpn(t_stack **ready, t_stack *input);
errors s21_calculate(t_stack *ready, double *result);
void s21_push(t_stack **head, double value, op_priority priority,
              lex_type type);
errors s21_pop(t_stack **head);
t_stack *create_node(const double value, op_priority priority, lex_type type,
                     errors *res);
// void print_node_list(t_stack *head);
void s21_push_at_head(t_stack **head, t_stack *node_to_insert);
void transfer(t_stack **head);
errors calculate_funcs(t_stack **number_stack, t_stack **operator_stack);
errors smart_calc(char *input_str, double x, double *result);
errors credit_calc(double summ, int month, double interest_rate,
                   creadit_type type, double *month_payment_min,
                   double *month_payment_max, double *total_payment,
                   double *over_payment);
void credit_diff(double summ, int month, double interest_rate,
                 double *month_payment_min, double *month_payment_max,
                 double *total_payment, double *over_payment);
void creadit_ann(double summ, int month, double interest_rate,
                 double *month_payment_min, double *month_payment_max,
                 double *total_payment, double *over_payment);
errors deposit_calc(deposit_t *depos, double *diff, double *tax_sum,
                    double *final_sum);
#endif  // SMART_CALC_H
