// Copyright 2023 Khairetdinov Timur
#ifndef MODULES_TASK_1_KHAIRETDINOV_T_TRAPEZOIDAL_METHOD_TRAPEZOIDAL_METHOD_H_
#define MODULES_TASK_1_KHAIRETDINOV_T_TRAPEZOIDAL_METHOD_TRAPEZOIDAL_METHOD_H_

#include <vector>
#include <utility>

double trapezoidalMethod(double (*function)(std::vector<double>),
                std::vector<std::pair<double, double>> boundaries,
                int partition);

#endif  // MODULES_TASK_1_KHAIRETDINOV_T_TRAPEZOIDAL_METHOD_TRAPEZOIDAL_METHOD_H_
