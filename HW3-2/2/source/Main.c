#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int result = lcm(num1, num2);
    printf("The least common multiple of %d and %d is: %d\n", num1, num2, result);

    return 0;
}

// 求最大公因數 (GCD) 的輔助函數
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 求最小公倍數 (LCM) 的函數
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}