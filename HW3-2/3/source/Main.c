#include <stdio.h>

int main() {
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent (>= 1): ");
    scanf("%d", &exponent);

    int result = power(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}

int power(int base, int exponent) {
    // 終止條件：若 exponent 為 1，直接返回 base
    if (exponent == 1) {
        return base;
    }
    // 遞迴：base * power(base, exponent - 1)
    return base * power(base, exponent - 1);
}
