#include "iostream"
#include "windows.h"
#include "time.h"
#define LENGTH 12

int getRandNum(){
    int min = 10;
    int max = 99;
    return min + rand() % (max - min + 1);
}

int returnMinInRange(int arr[], int start, int end){
    int min = 1000;
    for (int i = start; i < end; i++){
        if (arr[i] < min) min=arr[i];
    }
    return min;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(NULL));
    int array[LENGTH];
    std::cout<<"array: ";
    for(int i = 0; i < LENGTH; i++){
        array[i] = getRandNum();
        std::cout<<array[i]<<" ";
    }
    int minF = returnMinInRange(array, 0, 4);
    int minS = returnMinInRange(array, 5, 11);
    std::cout<<"\nmin(array[0; 4]): "<<minF;
    std::cout<<"\nmin(array[5,11]): "<<minS;
    std::cout<<"\nfirst - second = " << minF-minS;
    
}
