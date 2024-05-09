#ifndef search_algos
#define search_algos
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int recursive_binary_search(int *array, int value, int low, int high);
void print_array(int *array, int low, int high);
int binary_search_iterative(int *array, size_t size, int value);
#endif
