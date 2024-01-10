#ifndef TESTS_H
#define TESTS_H

#include <check.h>

#include "../s21_smart_calc.h"
#define S21_NAN 0.0 / 0.0
// Suite *test_smart_calc_error();
// Suite *test_smart_calc_ok();
Suite *test_smart_calculation();
// Suite *test_smart_calculation_error();
// Suite *test_credit_calculator();
// Suite *test_deposit_calculator();

static char test_binary_calculation_ok[6][200] = {
    "21+(21+21)*21-21",                                // 0
    "(7-(1+1))*3-(2+(1+1))+15/(7-(1+1))*3-(2+(1+1))",  // 1
    "(7-(1+1))*3-(2+(1+1))+15/(7-(1+1))*3-(2+(1+1))",  // 2
    "212+2322+(321*12/122)^3",                         // 3
    "(-343)+(23^78-12)",                               // 4
    "21+21-21*21/21^2%21",                             // 5
    // "212+122/(123^21-122)/(12^8-34)",                  // 6
    // "2122/122*(123^21-122)/12+(12^8-21)",              // 7
    // "2122/122*(123^21-122)/12+(12^8-21)",              // 8
    // "3212+12",                                         // 9
    // "2122/122*(123^21-122)/12+(12^8-21)",              // 10
    // "cos(1)",                                          // 11
    // "cos(cos(1%5))",                                   // 12
    // "sin(sin(sin(21)))",                               // 13
    // "cos(cos(cos(21)))",                               // 14
    // "tan(tan(tan(21)))",                               // 15
    // "asin(0.21)",                                      // 16
    // "acos(acos(1))",                                   // 17
    // "atan(atan(atan(21)))",                            // 18
    // "log(log(log(21)))",                               // 19
    // "ln(ln(ln(21)))",                                  // 20
    // "sqrt(sqrt(sqrt(21)))",                            // 21
    // "sin(cos(tan(atan(log(ln(sqrt(21)))))))",          // 22
    // "(-1)+x",                                          // 23
    // "(-1)*(1*(-1))",                                   // 24
    // "1+(-1+1)",                                        // 25
    // "3212+(-12)",                                      // 26
    // "asin(1)",                                         // 27
    // "asin(1)",                                         // 28
    // "acos(1)",                                         // 29
    // "acos(-1)",                                        // 30
    // "log(-21+55)",                                     // 31
    // "log(-0.21+1)",                                    // 32
    // "ln(-21+34)",                                      // 33
    // "ln(-0.21+5)",                                     // 34
    // "sqrt(-21+55)",                                    // 35
    // "log(ln(sqrt(-21+111)))",                          // 36
    // "cos(2*2)",                                        // 37
    // "42%20",
    // "+1",
    // "-1",
    // "1.5/0.5"
    };
static double binary_calculation_result[6] = {
    882.000000,              // 0
    16,                      // 1
    16,                      // 2
    31507.6,  // 3
    16397257218987799640104427892334248975884549556575474691566491439963775616139895504409296252851600802971648.000000,  // 4
    41,                                                              // 5
    // 212.000000000000000000000000000000000000000000000000003672,      // 6
    // 111998354780067496527200758558333190696465976.4494535519125683,  // 7
    // 111998354780067496527200758558333190696465976.4494535519125683,  // 8
    // 3224,                                                            // 9
    // 111998354780067496527200758558333190696465976.4494535519125683,  // 10
    // 0.540302,                                                        // 11
    // 0.85755321584,                                                   // 12
    // 0.676063,                                                        // 13
    // 0.65719195553,                                                   // 14
    // -1.9183976305,                                                   // 15
    // 0.21157495975,                                                   // 16
    // 1.57079632679,                                                   // 17
    // 0.78030258551,                                                   // 18
    // -0.91612670253,                                                  // 19
    // 0.10736814758,                                                   // 20
    // 1.4631114595,                                                    // 21
    // 0.83238367658,                                                   // 22
    // 4,                                                               // 23
    // 1,                                                               // 24
    // 1,                                                               // 25
    // 3200,                                                            // 26
    // 1.57079633,                                                      // 27
    // 1.57079633,                                                      // 28
    // 0,                                                               // 29
    // 3.14159265,                                                      // 30
    // 1.53147891704,                                                   // 31
    // -0.10237290871,                                                  // 32
    // 2.56494935746,                                                   // 33
    // 1.56653041142,                                                   // 34
    // 5.83095189485,                                                   // 35
    // 0.35216414902,                                                   // 36
    // -0.65364362086,                                                  // 37
    // 2,                                                               // 38
    // 1,
    // -1,
    // 3
    };

const char test_binary_calculation_ok_result_validation[42][200] = {
    "21+(21+21)*21-21",                                // 0
    "(7-(1+1))*3-(2+(1+1))+15/(7-(1+1))*3-(2+(1+1))",  // 1
    "(7-(1+1))*3-(2+(1+1))+15/(7-(1+1))*3-(2+(1+1))",  // 2
    "212+2322+(321*12/122)^3",                         // 3
    "(0-343)+(23^78-12)",                              // 4
    "21+21-21*21/21^2%21",                             // 5
    "212+122/(123^21-122)/(12^8-34)",                  // 6
    "2122/122*(123^21-122)/12+(12^8-21)",              // 7
    "2122/122*(123^21-122)/12+(12^8-21)",              // 8
    "3212+12",                                         // 9
    "2122/122*(123^21-122)/12+(12^8-21)",              // 10
    "cos(1)",                                          // 12
    "cos(cos(1%5))",                                   // 13
    "sin(sin(sin(21)))",                               // 14
    "cos(cos(cos(21)))",                               // 15
    "tan(tan(tan(21)))",                               // 16
    "asin(0.21)",                                      // 17
    "acos(acos(1))",                                   // 18
    "atan(atan(atan(21)))",                            // 19
    "log(log(log(21)))",                               // 20
    "ln(ln(ln(21)))",                                  // 21
    "sqrt(sqrt(sqrt(21)))",                            // 22
    "sin(cos(tan(atan(log(ln(sqrt(21)))))))",          // 23
    "(0-1)+x",                                         // 24
    "(0-1)*(1*(0-1))",                                 // 25
    "1+(0-1+1)",                                       // 26
    "3212+(0-12)",                                     // 27
    "asin(1)",                                         // 28
    "asin(1)",                                         // 29
    "acos(1)",                                         // 30
    "acos(0-1)",                                       // 31
    "log(0-21+55)",                                    // 32
    "log(0-0.21+1)",                                   // 33
    "ln(0-21+34)",                                     // 34
    "ln(0-0.21+5)",                                    // 35
    "sqrt(0-21+55)",                                   // 36
    "log(ln(sqrt(0-21+111)))",                         // 37
    "cos(2*2)",                                        // 38
    "42%20",
    "0+1",
    "0-1",
    "1.5/0.5"};

static char test_binary_calculation_error[28][200] = {
    "15/(7-(1+1))*3-(2+(1+1))*15/(7-(200+1))*3-(2+(1+1))*(15/",  // 0
    "15/(7-(1+1))*3-(2+(1+1))*15/(7-(200+1))*3-(2*(1*1))*(15/",  // 1
    "(7-(1+1))*3-(2+(1+1))+15/(7-(1+1))*3-(2+(1+1)))",           // 2
    "(7-(1+1))*3-(2+(1+1))+15/(7-(1+1))*3-(2+(1+1)))",           // 3
    ")+123(",                                                    // 4
    "*123",                                                      // 5
    "1.+1",                                                      // 6
    "1.1.+1",                                                    // 7
    "(1+1))",                                                    // 8
    "((1+1)",                                                    // 9
    "1++1",                                                      // 10
    "1+1*()",                                                    // 11
    "1*/(-1)",                                                   // 12
    "1+(1+1+)",                                                  // 13
    "1+--(1+1)",                                                 // 14
    "1+-(--1+1)",                                                // 15
    "1+-(1+-1)",                                                 // 16
    "1+-(-1+-1)",                                                // 17
    "2122%122*(123^21+-122)-(12^8)^3",                           // 18
    "23-+2",                                                     // 19
    "21+(21",                                                    // 20
    "21-21)",                                                    // 21
    "21(21*21)",                                                 // 22
    "21^(*21*21)",                                               // 23
    "21++++21",                                                  // 24
    "cos()",                                                     // 25
    "21.21.",                                                    // 26
    "cos(*2)"};

static char test_function_calculation[10][200] = {
    "sin(sin(sin(21)))",
    "cos(cos(cos(21)))",
    "tan(tan(tan(21)))",
    "asin(asin(asin(0.21)))",
    "acos(acos(1))",
    "atan(atan(atan(21)))",
    "log(log(log(21)))",
    "ln(ln(ln(21)))",
    "sqrt(sqrt(sqrt(21)))",
    "sin(cos(tan(atan(log(ln(sqrt(21)))))))+acos(asin(0.21))"};

static double function_calculation_result[10] = {
    0.676063, 0.657192,  -1.918398, 0.214835, 1.570796,
    0.780303, -0.916127, 0.107368,  1.463111, 2.189994};

static char test_incorrect_expression[9][200] = {
    "23-+2",    "21+(21",   "21-21)", "21(21*21)", "21^(*21*21)",
    "21++++21", "sin(x,x)", "cos()",  "21.21."};

static char test_calculation_error[10][200] = {
    "asin(21)",  "asin(-21)",
    "acos(21)",  "acos(-21)",
    "log(-21)",  "log(-0.21)",
    "ln(-21)",   "ln(-0.21)",
    "sqrt(-21)", "asin(acos(log(ln(sqrt(-21)))))"};

#endif  // TESTS_H