#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    double a, b, c;
    printf("Три вещественных числа\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a > -1 && a < 1) {
        printf("%g\n", a);
    }
    else {
        printf("Число не принадлежит интервалу (-1,1)\n");
    }
    if (b > -1 && b < 1) {
        printf("%g\n", b);
    }
    else {
        printf("Число не принадлежит интервалу (-1,1)\n");
    }
    if (c > -1 && c < 1) {
        printf("%g\n", c);
    }
    else {
        printf("Число не принадлежит интервалу (-1,1)\n");
    }
    printf("\n");
    return 0;
}

    
    

