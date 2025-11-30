#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    int N, i;
    long long a = 1;  
 
    printf("Введите целое число N (N > 0): ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("Ошибка: N должно быть положительным числом!\n");
        return 1;
    }

    i = 1;
    while (i <= N) {  
        a *= i;
        i++;
    }
    printf("Произведение 1 * 2 * 3 * ... * %d = %lld\n", N, a);

    return 0;
}