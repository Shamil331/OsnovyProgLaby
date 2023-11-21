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

    int min = 400;
    int minSt = 1;

    int arr[4][5];
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            arr[i][j] = getRandNum();
        }
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            std::cout << arr[i][j] << " "; 
        }
        std::cout<<"\n";
    }

    for (int j = 0; j < 5; j++){
        int sum = 0;
        for (int i = 0; i < 4; i++){
            sum+=arr[i][j];
        }
        if(sum<min){
            min=sum;
            minSt=j;
        }
        std::cout<<"\nСумма элементов " << j+1 << " столбца: " << sum;
    }
    minSt++;
    std::cout<<"\nНомер столбца с минимальной суммой элементов - "<<minSt<<" ("<<min<<")";

}