#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    double start = 0.1;    
    double end = 2.1;      
    double step;           
    double x, y;
    int steps;

    printf("Табулирование функции: y = x^2 + sin(5x)\n");
    printf("Интервал: [%.1f; %.1f]\n\n", start, end);

    printf("Введите шаг табуляции: ");
    scanf("%lf", &step);

    if (step <= 0) {
        printf("Ошибка: шаг должен быть положительным числом!\n");
        return 1;
    }

    printf("\n");
    printf("__________________\n");
    printf("|  x  |   f(x)   |\n");
    printf("__________________\n");

    x = start;
    while (x <= end + 1e-9) {  //погрешности вычислений
        y = x * x + sin(5 * x);  

        printf("|%5.2f|%10.4f|\n", x, y);

        x += step;
    }

    printf("__________________\n");

    return 0;
}