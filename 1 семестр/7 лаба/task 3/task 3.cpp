#include "iostream"
#include "windows.h"
#include "time.h"
#define SIZE 7
int getRandNum(int min = 10, int max = 99){
    return min + rand() % (max - min + 1);
}

bool checkDesc(int arr[]){
    for (int i = 1; i < SIZE; i++){
        if (arr[i-1] > arr[i]) return false;
    }
    return true;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(NULL));
    int arrayF[SIZE];
    int arrayS[SIZE];

    std::cout<<"First array: ";
    for(int i = 0; i < SIZE; i++){
        arrayF[i] = getRandNum();
        std::cout<<arrayF[i]<<" ";
    }

    for(int i = 0; i < SIZE; i++){
        arrayS[i] = getRandNum();
    }
    selectionSort(arrayS, SIZE);
    std::cout<<"\nSecond array: ";
    for(int i = 0; i < SIZE; i++){
        std::cout<<arrayS[i]<<" ";
    }

    bool resultF = checkDesc(arrayF);
    bool resultS = checkDesc(arrayS);

    if(resultF) std::cout<<"\nПервый массив отсортирован в порядке убывания";
    else std::cout<<"\nПервый массив не отсортирован в порядке убывания";

    if(resultS) std::cout<<"\nВторой массив отсортирован в порядке убывания";
    else std::cout<<"\nВторой массив не отсортирован в порядке убывания";
}
