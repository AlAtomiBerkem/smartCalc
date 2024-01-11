#include "tests.h"

int main() {
  Suite *calc_tests[] = {
    // test_smart_calc_ok(),
                        //  test_smart_calc_error(),
                         test_smart_calculation(),
                        //  test_smart_calculation_error(),
                        //  test_credit_calculator(),
                        //  test_deposit_calculator(),
                         NULL};
  for (int i = 0; calc_tests[i]; i++) {
    SRunner *sr = srunner_create(calc_tests[i]);
    srunner_run_all(sr, CK_NORMAL);
    srunner_ntests_failed(sr);
    srunner_free(sr);
  }
  return 0;
}

// START_TEST(ok_t1) {
//   int need_res = 0;
//   char need_str[300] = "\0";
// //  int status = validate(test_binary_calculation_ok[_i], need_str);
// //  ck_assert_int_eq(status, need_res);
//   ck_assert_str_eq(need_str, test_binary_calculation_ok_result_validation[_i]);
// }
// END_TEST

// START_TEST(error_t1) {
//   int need_res = 1;
//   char need_str[300] = "\0";
//   //int status = validate(test_binary_calculation_error[_i], need_str);
//  //ck_assert_int_eq(status, need_res);
 
// }
// END_TEST

START_TEST(binary_calculation_test) {
  double result = 0;
  int status = smart_calc(test_binary_calculation_ok[_i], "10", &result);
  ck_assert_double_eq_tol(result, binary_calculation_result[_i],1e-1);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(function_calculation_test) {
  double result = 0;
  int status = smart_calc(test_function_calculation[_i], "10", &result);
  ck_assert_double_eq_tol(result, function_calculation_result[_i], 1e-5);
  ck_assert_int_eq(status, 0);
}
END_TEST

// START_TEST(incorrect_expression_test) {
//   double result = 0;
//   int status = smart_calc(test_incorrect_expression[_i], 0, &result);
//   ck_assert_int_eq(status, 1);
// }
// END_TEST

// START_TEST(calculation_error_test) {
//   double result = 0;
//   int status = smart_calc(test_calculation_error[_i], 0, &result);
//   ck_assert_double_nan(result);
//   ck_assert_int_eq(status, 0);
// }
// END_TEST

START_TEST(division_by_zero_test) {
  double result = 0;
  char test[][100] = {"12/0", "12%0"};
  int status = smart_calc(test[0], 0, &result);
  ck_assert_int_eq(status, 0);
  status = smart_calc(test[1], 0, &result);
  ck_assert_int_eq(status, 0);
}
END_TEST

// START_TEST(credit_differentiated) {
//   errors res = OK;
//   double min = 0, max = 0, total = 0, over = 0;
//   double *month_payment_min = &min, *month_payment_max = &max,
//          *total_payment = &total, *over_payment = &over;
//   credit_calc(1547842, 35, 22.2, DIFF, month_payment_min, month_payment_max,
//               total_payment, over_payment);
//   ck_assert_double_eq_tol(min, 45042.2, 1e-2);
//   ck_assert_double_eq_tol(max, 72859.13, 1e-2);
//   ck_assert_double_eq_tol(total, 2063273.39, 1e-2);
//   ck_assert_double_eq_tol(over, 515431.39, 1e-2);
//   ck_assert_int_eq(res, OK);
// }

// START_TEST(credit_annuity) {
//   double min = 0, max = 0, total = 0, over = 0;
//   double *month_payment_min = &min, *month_payment_max = &max,
//          *total_payment = &total, *over_payment = &over;
//   errors res = credit_calc(1547842, 35, 22.2, ANNUITY, month_payment_min,
//                            month_payment_max, total_payment, over_payment);
//   ck_assert_double_eq_tol(round(min), 60470.00, 1e-2);
//   ck_assert_double_eq_tol(round(max), 60470.00, 1e-2);
//   ck_assert_double_eq_tol(round(total), 2116450.00, 1e-2);
//   ck_assert_double_eq_tol(round(over), 568608.00, 1e-2);
//   ck_assert_int_eq(res, OK);
// }
// END_TEST

// START_TEST(deposit_not_capitalized) {
//   errors res = OK;
//   deposit_t date = {1000000, 24,          10,        10,         YEAR,
//                     OFF,     {1, 11, 15}, {0, 0, 0}, {1, 3, 16}, {0, 0, 0}};
//   deposit_t *node = &date;
//   double diff_v = 0, tax_sum_v = 0, final_sum_v = 0;
//   double *diff = &diff_v, *tax_sum = &tax_sum_v, *final_sum = &final_sum_v;
//   res = deposit_calc(node, diff, tax_sum, final_sum);
//   ck_assert_int_eq(res, OK);
//   ck_assert_double_eq_tol(diff_v, 180000, 1e-5);
//   ck_assert_double_eq_tol(final_sum_v, 1000000, 1e-5);
//   ck_assert_double_eq_tol(tax_sum_v, 20000, 1e-5);
// }
// END_TEST

// START_TEST(deposit_capitalized_half_yearly) {
//   errors res = OK;
//   deposit_t date = {1000000, 24,          10,        10,         HALF_YEAR,
//                     ON,      {1, 11, 15}, {0, 0, 0}, {1, 3, 16}, {0, 0, 0}};
//   deposit_t *node = &date;
//   double diff_v = 0, tax_sum_v = 0, final_sum_v = 0;
//   double *diff = &diff_v, *tax_sum = &tax_sum_v, *final_sum = &final_sum_v;
//   res = deposit_calc(node, diff, tax_sum, final_sum);
//   ck_assert_int_eq(res, OK);
//   ck_assert_double_eq_tol(diff_v, 192519, 1e1);
//   ck_assert_double_eq_tol(final_sum_v, 1192519, 1e1);
//   ck_assert_double_eq_tol(tax_sum_v, 21391, 1e1);
// }
// END_TEST

// START_TEST(deposit_capitalized_quaterly) {
//   errors res = OK;
//   deposit_t date = {1000000, 12,          10,        10,         QUARTER,
//                     ON,      {1, 11, 15}, {0, 0, 0}, {1, 3, 16}, {0, 0, 0}};
//   deposit_t *node = &date;
//   double diff_v = 0, tax_sum_v = 0, final_sum_v = 0;
//   double *diff = &diff_v, *tax_sum = &tax_sum_v, *final_sum = &final_sum_v;
//   res = deposit_calc(node, diff, tax_sum, final_sum);
//   ck_assert_int_eq(res, OK);
//   ck_assert_double_eq_tol(diff_v, 93083.3, 1e1);
//   ck_assert_double_eq_tol(final_sum_v, 1093082.6056891, 1e1);
//   ck_assert_double_eq_tol(tax_sum_v, 10342, 1e1);
// }
// END_TEST

// START_TEST(deposit_capitalized_monthly) {
//   errors res = OK;
//   deposit_t date = {1000000, 12,          10,        10,         MONTH,
//                     ON,      {1, 11, 15}, {0, 0, 0}, {1, 3, 16}, {0, 0, 0}};
//   deposit_t *node = &date;
//   double diff_v = 0, tax_sum_v = 0, final_sum_v = 0;
//   double *diff = &diff_v, *tax_sum = &tax_sum_v, *final_sum = &final_sum_v;
//   res = deposit_calc(node, diff, tax_sum, final_sum);
//   ck_assert_int_eq(res, OK);
//   ck_assert_double_eq_tol(diff_v, 93806.9, 1e1);
//   ck_assert_double_eq_tol(final_sum_v, 1093810, 1e1);
//   ck_assert_double_eq_tol(tax_sum_v, 10423, 1e1);
// }
// END_TEST

// START_TEST(deposit_capitalized_yearly) {
//   errors res = OK;
//   deposit_t date = {1000000, 24,          10,        10,         YEAR,
//                     ON,      {1, 11, 15}, {0, 0, 0}, {1, 3, 16}, {0, 0, 0}};
//   deposit_t *node = &date;
//   double diff_v = 0, tax_sum_v = 0, final_sum_v = 0;
//   double *diff = &diff_v, *tax_sum = &tax_sum_v, *final_sum = &final_sum_v;
//   res = deposit_calc(node, diff, tax_sum, final_sum);
//   ck_assert_int_eq(res, OK);
//   ck_assert_double_eq_tol(diff_v, 188100, 1e1);
//   ck_assert_double_eq_tol(final_sum_v, 1188100, 1e1);
//   ck_assert_double_eq_tol(tax_sum_v, 20900, 1e1);
// }
// END_TEST

// Suite *test_smart_calc_ok() {
//   Suite *s = suite_create("\033[42m-=SMART_CALC_TESTS_VALIDATE_OK=-\033[0m");
//   TCase *tc = tcase_create("SMART_CALC_TESTS_ok");
//   suite_add_tcase(s, tc);

//   tcase_add_loop_test(tc, ok_t1, 0, 42);
//   return s;
// }

// Suite *test_smart_calc_error() {
//   Suite *s = suite_create("\033[42m-=SMART_CALC_TESTS_VALIDATE_ERROR=-\033[0m");
//   TCase *tc = tcase_create("SMART_CALC_TESTS_error");
//   suite_add_tcase(s, tc);

//   tcase_add_loop_test(tc, error_t1, 0, 28);
//   return s;
// }

Suite *test_smart_calculation() {
  Suite *s = suite_create("\033[42m-=SMART_CALC_TESTS_RESULT=-\033[0m");
  TCase *tc = tcase_create("SMART_CALC_TESTS_RESULT");
  suite_add_tcase(s, tc);
  tcase_add_loop_test(tc, binary_calculation_test, 0, 10);
  // tcase_add_loop_test(tc, function_calculation_test, 0, 10);
  tcase_add_test(tc, division_by_zero_test);
  return s;
}

// Suite *test_smart_calculation_error() {
//   Suite *s = suite_create("\033[42m-=SMART_CALC_TESTS_ERROR=-\033[0m");
//   TCase *tc = tcase_create("SMART_CALC_TESTS_RESULT");
//   suite_add_tcase(s, tc);
//   tcase_add_loop_test(tc, calculation_error_test, 0, 10);
//   tcase_add_loop_test(tc, incorrect_expression_test, 0, 9);
//   return s;
// }

// Suite *test_credit_calculator() {
//   Suite *s = suite_create("\033[42m-=CREDIT_CALCULATOR_TESTS=-\033[0m");
//   TCase *tc = tcase_create("CREDIT_CALCULATOR_TESTS");
//   suite_add_tcase(s, tc);
//   tcase_add_test(tc, credit_differentiated);
//   tcase_add_test(tc, credit_annuity);
//   return s;
// }

// Suite *test_deposit_calculator() {
//   Suite *s = suite_create("\033[42m-=DEPOSIT_CALCULATOR_TESTS=-\033[0m");
//   TCase *tc = tcase_create("DEPOSIT_CALCULATOR_TESTS");
//   suite_add_tcase(s, tc);
//   tcase_add_test(tc, deposit_not_capitalized);
//   tcase_add_test(tc, deposit_capitalized_monthly);
//   tcase_add_test(tc, deposit_capitalized_quaterly);
//   tcase_add_test(tc, deposit_capitalized_half_yearly);
//   tcase_add_test(tc, deposit_capitalized_yearly);
//   return s;
// }