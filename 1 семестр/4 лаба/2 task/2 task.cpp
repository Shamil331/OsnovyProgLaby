#include "iostream"
#include "stdio.h"

int main()
{
    int n, sumMinus, countPlus, number;
    countPlus=0;
    sumMinus = 0;
    setlocale (LC_ALL,"RUSSIAN");
    printf("Введите количество чисел: ");
    scanf_s("%d", &n);
    for (int i = 1; i <= n ; i++){
        printf("Введите %d-е число: ", i);
        scanf_s("%d", &number);
        if(number<=0)
            sumMinus+=number;
        else
            countPlus++;
    }
    printf("Сумма отрицательных: %d\n", sumMinus);
    printf("Количество положительных: %d\n", countPlus);
    return 0;
}