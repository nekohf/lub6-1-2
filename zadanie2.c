#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    double x;
    printf("Введите x: ");
    scanf("%lf", &x);
    /*
       F(x) = -3x + 9               при x > 3
       F(x) = x^3 / (x^2 + 8)       при x <= 3
       Контрольные примеры:
         x = 4 -> F = -12 + 9 = -3
         x = 2 -> F = 8 / 12 ? 0.6667 */
       printf("F(%.2f) = %.4f\n", x, (x > 3) ? (-3 * x + 9) : (x * x * x / (x * x + 8)));
       return 0;
       system("pause");
}
