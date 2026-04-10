#include <stdio.h>

unsigned long long sum_of_square_of_first_n_odd(unsigned long long n) {
    unsigned long long sum = (n * (2ULL * n + 1) * (2ULL * n - 1)) / 3;
    return sum;
}

int main() {
    unsigned long long n = 327500;
    printf("Sum of the square of first %llu odd numbers: %llu\n", 
           n, sum_of_square_of_first_n_odd(n));
    return 0;
}