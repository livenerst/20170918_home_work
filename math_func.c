//
// Created by Joffrey on 26/09/2017.
//
# include <stdlib.h>
#include "math_func.h"

unsigned long fact(unsigned long n) {
    unsigned long res = 1;
    for (unsigned long i = 1; i <= n; i+=1) {
        res *= i;
    }
    return res;
}

unsigned long fibo(unsigned long n) {
    if (n == 0) {
        return 0;
    }

    unsigned long a = 0;
    unsigned long b = 1;
    unsigned long c = 0;
    for (unsigned long i = 1; i<n; i += 1) {
        c = b;
        b += a;
        a = c;
    }
    return b;
}

unsigned long int_sqrt(unsigned long n) {
    // FIX ME
}

unsigned long digit_number(unsigned long n) {
    unsigned long res = 0;
    while (n != 0) {
        n /= 10;
        res += 1;
    }
    return res;
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