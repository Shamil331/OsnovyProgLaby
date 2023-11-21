#include "iostream"
#include "windows.h"
#define LENGTH 80

int FindSymbol(char (&str)[LENGTH], char symb){
    int count = 0;
    for (char i : str){
        if (i==symb) count++;
    }
    return count;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    char symbol;
    char strF[LENGTH];
    char strS[LENGTH];
    std::cout<<"Введите первую строку символов\n";
    gets_s(strF);
    std::cout<<"Введите вторую строку символов\n";
    gets_s(strS);
    std::cout<<"Введите символ: ";
    symbol=getchar();
    std::cout<<"Кол-во совпадений в 1 строке: "<<FindSymbol(strF, symbol);
    std::cout<<"\nКол-во совпадений во 2 строке: "<<FindSymbol(strS, symbol);
    
}
