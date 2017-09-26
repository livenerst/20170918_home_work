//
// Created by Joffrey on 26/09/2017.
//
# include <stdlib.h>
#include "math_func.h"

unsigned long fact(unsigned long n) {
    unsigned long res = 1;
    for (unsigned long i = 1; i < n; i+=1) {
        res *= i;
    }
    return res;
}

unsigned long fibo(unsigned long n) {
    // FIX ME
}

unsigned long int_sqrt(unsigned long n) {
    // FIX ME
}

unsigned long digit_number(unsigned long n) {
    // FIX ME
}

unsigned long binary_digit_number(unsigned long n) {
    // FIX ME
}

unsigned long power_of_2(unsigned long n) {
    // FIX ME
}

unsigned long divisor_sum(unsigned long n) {
    // FIX ME
}