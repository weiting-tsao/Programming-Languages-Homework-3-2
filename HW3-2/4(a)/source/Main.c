#include <stdio.h>

unsigned long long int fibonacci(unsigned int n) {
    // 處理特殊情況：若 n 為 0 或 1，直接返回 n
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long int a = 0; // F(0)
    unsigned long long int b = 1; // F(1)
    unsigned long long int fib = 0;

    // 從 F(2) 開始迴圈計算
    for (unsigned int i = 2; i <= n; ++i) {
        fib = a + b; // 計算 F(i)
        a = b;       // 更新 a 為前一項
        b = fib;     // 更新 b 為當前項
    }

    return fib;
}

int main() {
    unsigned int n;
    printf("Enter the position n in Fibonacci sequence: ");
    scanf("%u", &n);

    unsigned long long int result = fibonacci(n);
    printf("Fibonacci number at position %u is: %llu\n", n, result);

    return 0;
}
