#include "iostream"
#include "stdlib.h"
#include "time.h"

int getRandNum(){
    int min = 10;
    int max = 99;
    return min + rand() % (max - min + 1);
}

int main()
{
    setlocale(LC_ALL,"RUSSIAN");
    srand(time(NULL));

    const int n = 6;
    int min = 1000;
    int st = 0;

    int arr[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arr[i][j] = getRandNum();
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cout << arr[i][j] << " "; 
        }
        std::cout<<"\n";
    }

    for (int j = 0; j < n; j++){
        for (int i = 0; i < n; i++){
            if (i > st) {
                if (arr[i][j] < min) min = arr[i][j];
            }
        }
        st++;
        std::cout<<"\n";
    }
    std::cout<<"\nМинимальный элемент ниже диагонали - "<<min;

}