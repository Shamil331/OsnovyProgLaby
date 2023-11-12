#include "iostream"
#include "windows.h"

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

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int arr[] = {4, 2, 9, 6, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Исходный массив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ",arr[i]);
    }

    selectionSort(arr, size);

    printf("\nОтсортированный массив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}
