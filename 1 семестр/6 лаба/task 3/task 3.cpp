#include "iostream"
#include "windows.h"
#define LENGTH 80
#define underline "\033[4m"
#define line "\033[0m"
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    char arrGl[] = {'у', 'е', 'ы', 'а', 'о', 'э', 'я', 'и', 'ю', 'ё',
                    'У', 'Е', 'Ы', 'А', 'О', 'Э', 'Я', 'И', 'Ю', 'Ё'};
    
    char str[LENGTH];
    int i;
    i = 0;
    printf("Введите строку символов\n");
    gets_s(str);
    while(str[i]!='.') {
        bool foundGl = false;
        for(char j : arrGl){
            if (str[i] == j) {
                std::cout << underline << str[i];
                foundGl = true;
                continue;
            }
        }
        if (!foundGl) std::cout << line << str[i];
        i++;
    }
}