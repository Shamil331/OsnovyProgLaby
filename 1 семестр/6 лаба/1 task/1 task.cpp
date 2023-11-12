#include "iostream"
#include "conio.h"
#include "windows.h"
#define LENGTH 80

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    char str[LENGTH];
    int first, last, current, i;

    printf("Введите строку символов\n");
    gets_s(str);

    printf("Результат: \n");
    i=0;
    while(str[i]!='\0'){
        if(str[i]==' ') i++;
        else{
            first=i;
            do i++; while(str[i]!=' ' && str[i]!='\0');
            last = i;
            if(str[last-2]=='в' && str[last-1]=='а'){
                for (int j = first; j<last; j++){
                    putchar(str[j]);
                }
                printf(" - %d; ", last - first);
            }
        }
    }
}