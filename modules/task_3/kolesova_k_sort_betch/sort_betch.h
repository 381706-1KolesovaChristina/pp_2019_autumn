// Copyright 2019 Kolesova Kristina
#ifndef MODULES_TASK_3_KOLESOVA_K_SORT_BETCH_SORT_BETCH_H_
#define MODULES_TASK_3_KOLESOVA_K_SORT_BETCH_SORT_BETCH_H_

#include <mpi.h>
#include <vector>
#include <algorithm>

std::vector<double> randVec(int size);
std::vector<double> separation(std::vector<double> vec);
std::vector<double> merge_even(const std::vector<double>& vec1, const std::vector<double>& vec2);
std::vector<double> merge_odd(const std::vector<double>& vec1, const std::vector<double>& vec2);
std::vector<double>  merger(std::vector<double> vec, int even_size, int odd_size);
std::vector<double> razr(std::vector<double> vec1, std::vector<double> vec2, int size, int byte);
std::vector<double> last_razr(std::vector<double> vec1, std::vector<double> vec2, int byte, int size);
std::vector<double> sort(std::vector<double> vec, int size);
std::vector<double> merge_batcher(std::vector<double> global_vec, int size_vec);

#endif  // MODULES_TASK_3_KOLESOVA_K_SORT_BETCH_SORT_BETCH_H_
