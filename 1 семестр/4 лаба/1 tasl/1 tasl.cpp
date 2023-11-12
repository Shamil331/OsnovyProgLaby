#include "iostream"
#include "stdio.h"
#include "math.h"
long long factorial(long long x)
{
    if (x==0) return 1;
    else return x * factorial(x-1);
}
int main()
{
    int n, count, number;
    count=0;
    setlocale (LC_ALL,"RUSSIAN");
    printf("Введите количество чисел: ");
    scanf_s("%d", &n);
    for (int i = 1; i <= n ; i++){
        printf("Введите %d-е число: ", i);
        scanf_s("%d", &number);
        printf("%f", pow(2,i));
        printf(" < %d < ", number);
        printf("%d\n", factorial(i));
        if (pow(2, i) < number && number < factorial(i))
        {
            printf("Условие верно\n");
            count++;
        }
        else
            printf("Условик неверно\n");
            
    }
    printf("Условие выполнено %d раз(-а)", count);
    return 0;
}
