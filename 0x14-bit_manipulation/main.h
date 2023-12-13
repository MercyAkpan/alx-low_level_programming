#ifndef mainh
#define mainh
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
void print_bi(unsigned long int n);
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#include <math.h>
int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif
