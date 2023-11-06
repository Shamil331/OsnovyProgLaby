#include "iostream"
#include "stdio.h"

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int x;
	printf("Введите число ");
	scanf_s("%d",&x);

	while (x >= 10) {
		x /= 10;
	}

	printf("Первая цифра -  %d", x);
	return 0;
}
