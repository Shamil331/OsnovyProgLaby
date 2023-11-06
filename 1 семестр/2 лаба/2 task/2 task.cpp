#include "iostream"
#include "stdio.h"
#include "math.h"

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
	int left, right, a, iterations;
	printf("iterations=");
	scanf_s("%d", &iterations);
	while (iterations <= 0) {
		printf("iterations должен быть больше 0 \niterations=");
		scanf_s("%d", &iterations);
	}
	a = 0;
	left = 0;
	right = 0;
	for (int n = 1; n <= iterations; n++) {
		a = pow(n, 3);
		left += a;
	}
	for (int n = 1; n <= iterations; n++) {
		right += n;
	}
	right = pow(right, 2);
	printf("left=%d\n", left);
	printf("right=%d\n", right);
	if (left == right) printf("Равенсто верно");
	else printf("Равенство неверно");
	return 0;
}
