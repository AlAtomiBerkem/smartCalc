#include "smartcalc.h"

errors validate(char *str, char *new_s) {
  errors res = OK;
  int number_pos = 0, point_exist = 0, bkt_counter = 0, arithmetich_pos = 0,
      can_pointer = 0/*, x_exist = 0*/, bkt_pos = 0, u_min = 0;
  char check_numbers[12] = "0123456789\0";
  char check_arithmetic[8] = "%+-*/^\0";
  char check_arithmetic_st[6] = "%*/^\0";
  if (strchr(check_arithmetic_st, *str) != 0) res = VALIDATE_ERROR;
  if (*str == ')') res = VALIDATE_ERROR;
  if (*str == '-' || *str == '+') {
    *new_s++ = '0';
    *(new_s++) = *(str++);
  }
  while (res == OK && *str) {
    if (*str == '(') {
      bkt_counter++;
      bkt_pos = 1;
    } else if (*str == ')') {
      bkt_counter--;
    } else if (strchr(check_numbers, *str) != 0 || *str == 'x') {
      // if (*str == 'x') x_exist = 1;
      number_pos = 1;
      point_exist = 0;
      arithmetich_pos = 0;
      bkt_pos = 0;
    } else if (*str == '.' && point_exist == 0 && number_pos == 1 &&
               can_pointer == 0) {
      point_exist = 1;
      can_pointer = 1;
    } else if (strchr(check_arithmetic, *str) != 0 && arithmetich_pos == 0 &&
               point_exist == 0) {
      number_pos = 0;
      arithmetich_pos = 1;
      can_pointer = 0;
      bkt_pos = 0;
    }
    *(new_s++) = *(str++);
    if (*(str - 1) == '(' && (*(str) == '-' || *(str) == '+')) {
      u_min = 1;
      *new_s++ = '0';
    }
    if (bkt_pos == 1 && strchr(check_arithmetic, *str) && u_min == 0)
      res = VALIDATE_ERROR;
    if (number_pos == 1 && *str == '(') res = VALIDATE_ERROR;
    if (*str == ')' && bkt_pos == 1) res = VALIDATE_ERROR;
    // if (*str == 'x' && x_exist == 1) res = VALIDATE_ERROR;
    if (*str == '.' &&
        (point_exist == 1 || arithmetich_pos == 1 || can_pointer == 1))
      res = VALIDATE_ERROR;
    if ((strchr(check_arithmetic, *str) != 0) &&
        (point_exist == 1 || arithmetich_pos == 1) && u_min == 0)
      res = VALIDATE_ERROR;
    u_min = 0;
  }
  if (arithmetich_pos == 1) res = VALIDATE_ERROR;
  if (bkt_counter != 0) res = VALIDATE_ERROR;
  return res;
}

errors parser(t_stack **head, char *str, double x_value) {
  errors res = OK;
  while (*str && res == OK) {
    if (is_digit(*str))
      s21_push_at_head(
          head, create_node(strtod(str, &str), DIGIT_X_PRIORITY, DIGIT, &res));
    else if (*str == 'x') {
      s21_push_at_head(head, create_node(x_value, DIGIT_X_PRIORITY, X, &res));
      str++;
    } else if (*str == '-') {
      s21_push_at_head(head, create_node(0, PLUS_MINUS_PRIORITY, MINUS, &res));
      str++;
    } else if (*str == '+') {
      s21_push_at_head(head, create_node(0, PLUS_MINUS_PRIORITY, PLUS, &res));
      str++;
    } else if (*str == '/') {
      s21_push_at_head(head, create_node(0, DIV_MOD_MUT_PRIORITY, DIV, &res));
      str++;
    } else if (*str == '*') {
      s21_push_at_head(head, create_node(0, DIV_MOD_MUT_PRIORITY, MULT, &res));
      str++;
    } else if (*str == '^') {
      s21_push_at_head(head, create_node(0, POW_PRIORITY, POW, &res));
      str++;
    } else if (*str == '%') {
      s21_push_at_head(head, create_node(0, DIV_MOD_MUT_PRIORITY, MOD, &res));
      str++;
    } else if (*str == 'c' && *(str + 1) == 'o' && *(str + 2) == 's') {
      s21_push_at_head(head, create_node(0, FUNCS_PRIORITY, COS, &res));
      str += 3;
    } else if (*str == 's' && *(str + 1) == 'i' && *(str + 2) == 'n') {
      s21_push_at_head(head, create_node(0, FUNCS_PRIORITY, SIN, &res));
      str += 3;
    } else if (*str == 't' && *(str + 1) == 'a' && *(str + 2) == 'n') {
      s21_push_at_head(head, create_node(0, FUNCS_PRIORITY, TAN, &res));
      str += 3;
    } else if (*str == 'a' && *(str + 1) == 'c' && *(str + 2) == 'o' &&
               *(str + 3) == 's') {
      s21_push_at_head(head, create_node(0, FUNCS_PRIORITY, ACOS, &res));
      str += 4;
    } else if (*str == 'a' && *(str + 1) == 's' && *(str + 2) == 'i' &&
               *(str + 3) == 'n') {
      s21_push_at_head(head, create_node(0, FUNCS_PRIORITY, ASIN, &res));
      str += 4;
    } else if (*str == 'a' && *(str + 1) == 't' && *(str + 2) == 'a' &&
               *(str + 3) == 'n') {
      s21_push_at_head(head, create_node(0, FUNCS_PRIORITY, ATAN, &res));
      str += 4;
    } else if (*str == 's' && *(str + 1) == 'q' && *(str + 2) == 'r' &&
               *(str + 3) == 't') {
      s21_push_at_head(head, create_node(0, FUNCS_PRIORITY, SQRT, &res));
      str += 4;
    } else if (*str == 'l' && *(str + 1) == 'n') {
      s21_push_at_head(head, create_node(0, FUNCS_PRIORITY, LN, &res));
      str += 2;
    } else if (*str == 'l' && *(str + 1) == 'o' && *(str + 2) == 'g') {
      s21_push_at_head(head, create_node(0, FUNCS_PRIORITY, LOG, &res));
      str += 3;
    } else if (*str == '(') {
      s21_push_at_head(head, create_node(0, BKT_PRIORITY, BKT_LEFT, &res));
      str++;
    } else if (*str == ')') {
      s21_push_at_head(head, create_node(0, BKT_PRIORITY, BKT_RIGHT, &res));
      str++;
    } else
      res = VALIDATE_ERROR;
  }
  return res;
}

errors s21_rpn(t_stack **ready, t_stack *input_rnp) {
  errors res = OK;
  t_stack *support = NULL;
  while (input_rnp != NULL) {
    if (input_rnp->priority == DIGIT_X_PRIORITY) {
      s21_push(ready, input_rnp->value, input_rnp->priority, input_rnp->type);
      s21_pop(&input_rnp);
    } else if (input_rnp->type == BKT_LEFT) {
      s21_push(&support, input_rnp->value, input_rnp->priority, input_rnp->type);
      s21_pop(&input_rnp);
    } else if (input_rnp->type == BKT_RIGHT) {
      while (support->type != BKT_LEFT) {
        s21_push(ready, support->value, support->priority, support->type);
        s21_pop(&support);
      }
      s21_pop(&support);
      s21_pop(&input_rnp);
    } else if (support == NULL) {
      s21_push(&support, input_rnp->value, input_rnp->priority, input_rnp->type);
      s21_pop(&input_rnp);
    } else {
      while (support != NULL && support->priority >= input_rnp->priority) {
        s21_push(ready, support->value, support->priority, support->type);
        s21_pop(&support);
      }
      s21_push(&support, input_rnp->value, input_rnp->priority, input_rnp->type);
      s21_pop(&input_rnp);
    }
  }
  while (support != NULL) {
    if (support->priority == BKT_PRIORITY) res = RPN_ERROR;
    s21_push(ready, support->value, support->priority, support->type);
    s21_pop(&support);
  }
  return res;
}

errors s21_calculate(t_stack *ready, double *result) {
  errors res = OK;
  t_stack *number_stack = NULL, *operator_stack = NULL;
  while (ready != NULL && res == OK) {
    if (ready->priority <= 0) {
      s21_push(&number_stack, ready->value, ready->priority, ready->type);
      s21_pop(&ready);
    } else {
      s21_push(&operator_stack, ready->value, ready->priority, ready->type);
      s21_pop(&ready);
    }
    if (operator_stack != NULL && number_stack == NULL)
      res = CALCULATION_ERROR;
    else if (operator_stack != NULL) {
      if (operator_stack->type >= COS) {
        res = calculate_funcs(&number_stack, &operator_stack);
      } else {
        if (number_stack->next == NULL)
          res = CALCULATION_ERROR;
        else {
          res = calculate_funcs(&number_stack, &operator_stack);
        }
      }
    }
  }
  if (res == OK) (*result) = number_stack->value;
  if (number_stack != NULL) s21_pop(&number_stack);
  if (operator_stack != NULL) res = CALCULATION_ERROR;
  return res;
}

errors calculate_funcs(t_stack **number_stack, t_stack **operator_stack) {
  errors res = OK;
  int x = 2;
  double to_ready = 0;
  if ((*operator_stack)->type >= COS) x = 1;
  if ((*operator_stack)->type == MINUS)
    to_ready = (*number_stack)->next->value - (*number_stack)->value;
  else if ((*operator_stack)->type == PLUS)
    to_ready = +(*number_stack)->next->value + (*number_stack)->value;
  else if ((*operator_stack)->type == DIV)
    to_ready = (*number_stack)->next->value / (*number_stack)->value;
  else if ((*operator_stack)->type == MULT)
    to_ready = (*number_stack)->next->value * (*number_stack)->value;
  else if ((*operator_stack)->type == POW)
    to_ready = pow((*number_stack)->next->value, (*number_stack)->value);
  else if ((*operator_stack)->type == MOD)
    to_ready = fmod((*number_stack)->next->value, (*number_stack)->value);
  else if ((*operator_stack)->type == COS)
    to_ready = cos((*number_stack)->value);
  else if ((*operator_stack)->type == SIN)
    to_ready = sin((*number_stack)->value);
  else if ((*operator_stack)->type == TAN)
    to_ready = tan((*number_stack)->value);
  else if ((*operator_stack)->type == ACOS)
    to_ready = acos((*number_stack)->value);
  else if ((*operator_stack)->type == ASIN)
    to_ready = asin((*number_stack)->value);
  else if ((*operator_stack)->type == ATAN)
    to_ready = atan((*number_stack)->value);
  else if ((*operator_stack)->type == SQRT)
    to_ready = sqrt((*number_stack)->value);
  else if ((*operator_stack)->type == LN)
    to_ready = log((*number_stack)->value);
  else if ((*operator_stack)->type == LOG)
    to_ready = log10((*number_stack)->value);
  s21_pop(operator_stack);
  for (int i = 0; i < x; i++) s21_pop(number_stack);
  s21_push(number_stack, to_ready, DIGIT_X_PRIORITY, DIGIT);
  return res;
}

errors smart_calc(char *input_str, double x, double *result) {
  char new_s[300] = "\0";
  errors res = validate(input_str, new_s);
  t_stack *parts = NULL;
  t_stack *ready = NULL;
  if (res == OK) res = parser(&parts, new_s, x);
  if (res == OK) res = s21_rpn(&ready, parts);
  if (res == OK) {
    transfer(&ready);
    res = s21_calculate(ready, result);
  }
  return res;
}

void transfer(t_stack **head) {
  t_stack *tmp = NULL;
  while ((*head) != NULL) {
    s21_push(&tmp, (*head)->value, (*head)->priority, (*head)->type);
    s21_pop(head);
  }
  *head = tmp;
}


errors credit_calc(double summ, int month, double interest_rate,
                   creadit_type type, double *month_payment_min,
                   double *month_payment_max, double *total_payment,
                   double *over_payment) {
  errors res = OK;
  if (summ > 0 && month > 0 && interest_rate > 0) {
    double non_porc_rate = (interest_rate / 1200) + 1;
    if (type == DIFF)
      credit_diff(summ, month, non_porc_rate, month_payment_min,
                  month_payment_max, total_payment, over_payment);
    else if (type == ANNUITY)
      creadit_ann(summ, month, non_porc_rate, month_payment_min,
                  month_payment_max, total_payment, over_payment);
  } else
    res = CREDIT_ERROR;
  return res;
}

void credit_diff(double summ, int month, double interest_rate,
                 double *month_payment_min, double *month_payment_max,
                 double *total_payment, double *over_payment) {
  double static_payment = summ / month, to_calc_over = summ;
  for (int i = 0; i < month; i++) {
    double curr_proc = summ * (interest_rate - 1);
    if (i == 0) *month_payment_max = curr_proc + static_payment;
    if (i == month - 1) *month_payment_min = curr_proc + static_payment;
    summ -= static_payment;
    *total_payment += curr_proc + static_payment;
  }
  *over_payment = *total_payment - to_calc_over;
}

void creadit_ann(double summ, int month, double interest_rate,
                 double *month_payment_min, double *month_payment_max,
                 double *total_payment, double *over_payment) {
  *month_payment_max = summ * (interest_rate - 1) * pow(interest_rate, month) /
                       (pow(interest_rate, month) - 1);
  *month_payment_min = *month_payment_max;
  *total_payment = month * (*month_payment_min);
  *over_payment = (*total_payment) - summ;
}

errors deposit_calc(deposit_t *depos, double *diff, double *tax_sum,
                    double *final_sum) {
  errors res = OK;
  double start_summ = depos->summ;
  double need_tax = depos->tax_rate / 100;
  double total_tax = 0;
  double total_minus = 0;
  double period_int_rate =
      depos->interest_rate / (1200 / (int)(depos->payment_period));
  double month_int_rate = period_int_rate / (int)(depos->payment_period);
  int count_of_payments = depos->month / (int)(depos->payment_period);
  double total_win = 0;
  int i;
  double total_add = 0;
  for (i = 0; i < count_of_payments; i++) {
    for (int j = 0; j < 3; j++) {
      if (depos->dates_of_adding[j] > 0) {
        int add_checker =
            ((depos->dates_of_adding[j]) / (int)(depos->payment_period));
        if (add_checker <= i) {
          depos->summ += depos->sizes_of_adding[j];
          total_add += depos->sizes_of_adding[j];
          depos->sizes_of_adding[j] = 0;
        }
      }
      if (depos->dates_of_remove[j] > 0) {
        int remove_checker =
            ((depos->dates_of_remove[j]) / (int)(depos->payment_period));
        if (remove_checker <= i) {
          depos->summ -= depos->size_of_remove[j];
          total_minus += depos->size_of_remove[j];
          depos->size_of_remove[j] = 0;
        }
      }
    }
    if (depos->summ > 0) {
      total_tax += ((period_int_rate)*depos->summ) * need_tax;
      if (depos->capitalization == ON)
        depos->summ += ((period_int_rate)*depos->summ) * (1 - need_tax);
      else if (depos->capitalization == OFF)
        total_win += ((period_int_rate)*depos->summ) * (1 - need_tax);
    } else
      res = DEPOSIT_ERROR;
  }
  total_win += depos->summ * (1 - need_tax) *
               (depos->month - (i * depos->payment_period)) * month_int_rate;
  total_tax += depos->summ * need_tax *
               (depos->month - (i * depos->payment_period)) * month_int_rate;
  if (depos->capitalization == ON) {
    *final_sum = depos->summ;
    *tax_sum = total_tax;
    *diff = depos->summ - (start_summ - total_minus + total_add);
  }
  if (depos->capitalization == OFF) {
    *final_sum = depos->summ;
    *tax_sum = total_tax;
    *diff = total_win;
  }
  return res;
}


errors s21_pop(t_stack **head) {
  errors res = OK;
  if (*head != NULL) {
    t_stack *tmp = (*head);
    *head = tmp->next;
    free(tmp);
  } else
    res = POP_ERROR;
  return res;
}

void s21_push(t_stack **head, double value, op_priority priority,
              lex_type type) {
  t_stack *tmp = (t_stack *)calloc(1, sizeof(t_stack));
  tmp->value = value;
  tmp->type = type;
  tmp->priority = priority;
  tmp->next = (*head);
  (*head) = tmp;
}


t_stack *create_node(const double value, op_priority priority, lex_type type,
                     errors *res) {
  t_stack *node = (t_stack *)calloc(1, sizeof(t_stack));
  if (node != NULL) {
    node->priority = priority;
    node->value = value;
    node->type = type;
    node->next = NULL;
  } else
    *res = CREATE_ERROR;
  return node;
}

void s21_push_at_head(t_stack **head, t_stack *node_to_insert) {
  if (*head == NULL)
    *head = node_to_insert;
  else {
    t_stack *last_node = *head;
    while (last_node->next != NULL) {
      last_node = last_node->next;
    }
    last_node->next = node_to_insert;
  }
}
