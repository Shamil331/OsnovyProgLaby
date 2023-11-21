#include "iostream"
#include "windows.h"
#define LENGTH 80
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    char arrGl[] = {'a', 'e', 'i', 'o', 'u', 'y',
                    'A', 'E', 'I', 'O', 'U', 'Y'};
    
    char str[LENGTH];
    int i;
    i = 0;
    std::cout<<"Введите строку символов\n";
    gets_s(str);
    for (char j : arrGl){
        int count = 0;
        i=0;
        while(str[i]!='.'){
            if(j==str[i]) count++;
            i++;
        }
        if (count!=0) std::cout<<"Буква "<< j << " встречается "<< count << " раз\n";
    }
}