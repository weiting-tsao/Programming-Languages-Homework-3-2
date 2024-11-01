#include <stdio.h>
#include <limits.h>

int main() {
    unsigned long long int a = 0;
    unsigned long long int b = 1;
    unsigned long long int fib = 0;
    unsigned int n = 1;

    printf("Fibonacci numbers within the range of unsigned long long int:\n");

    // 逐步計算 Fibonacci 數直到超出上限
    while (1) {
        fib = a + b;
        if (fib < a) {  // 檢查溢出情況
            break;
        }
        printf("F(%u) = %llu\n", n, fib);

        a = b;
        b = fib;
        ++n;
    }

    printf("Largest Fibonacci number that can be represented: F(%u) = %llu\n", n - 1, a);

    return 0;
}
