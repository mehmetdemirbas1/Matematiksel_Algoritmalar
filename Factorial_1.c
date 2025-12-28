#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Factorial(int fac)
{
	if (fac == 0 || fac == 1)
		return 1;

	return fac * Factorial(fac - 1);
}

int main()
{
	int number;
	printf("Bir sayi giriniz:");
	(void)scanf("%d", &number);

	printf("%d! = %d", number, Factorial(number));
}