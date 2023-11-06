#include "iostream"
#include "stdio.h"
#define E 1e-4

	int main()
	{
		setlocale(LC_ALL, "RUSSIAN");
		float x, y, a;
		printf("x=");
		scanf_s("%f", &x);
		while (fabs(x) >= 1){
			printf("Модуль x должен быть меньше 1 \nx=");
			scanf_s("%f", &x);
		}
		a = fabs(x);
		y = 0;
		for (int n = 1; fabs(a) >= E; n++)
		{
			a = pow(x, n) / n;
			y += a;
		}
		y = -1 * y;
		printf("y=%f\n", y);
		printf("ln(1-x)=%f\n", logf(fabs(1.0 - x)));
		return 0;
	}

