#include <stdio.h>

int sumofdigits(int x);
void intervalnrm(int *m, int *n);

int main() 
{
	int m, n, sum;
	printf("Введите два целых числа, ограничивающих диапазон чисел:\n");
	scanf("%d%d", &m, &n);
	intervalnrm(&m, &n);
	printf("\nЧисла, квадрат которых равен кубу суммы их цифр:\n");
	for (int i = m; i <= n; ++i)
	{
		sum = sumofdigits(i);
		if (i * i == sum * sum * sum)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}

void intervalnrm(int *m, int *n)
{
	if (*m > *n)
	{
		int tmp = *m;
		*m = *n;
		*n = tmp;
	}
}

int sumofdigits(int x)
{
	if (x < 0) x = - x;
	int sum = 0;
	while (x > 0)
	{
		sum = sum + x % 10;
		x = x / 10;
	}
	return sum;
}
