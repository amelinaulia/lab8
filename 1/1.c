#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    int n, m;
    int s = 0; 
    int k = 1; 
    printf("¬ведите n: ");
    scanf("%d", &n);
    printf("¬ведите m: ");
    scanf("%d", &m);

    for (int i = m; i >= n; i--) {
        s += i; 
        printf("выполнено %d раз\n", k++); 
    }
    printf("результат %d\n", s);

    return 0;
}
