#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int isprime(int val)
{
	int is_val_prime = 1;
	if (val == 0 || val == 1)
		return 0;

	if (val % 2 == 0)
		return val == 2;

	if (val % 3 == 0)
		return val == 3;

	if (val % 5 == 0)
		return val == 5;

	else
		for (int i = 7; i * i <= val; i += 2)
			if (val % i == 0)
				return 0;

	return 1;
}

int main()
{
    int number;
    printf("Bir sayi giriniz:");
    (void)scanf("%d",&number);

    if(isprime(number))
        printf("%d bir asal sayidir.",number);

    else
        printf("%d bir asal sayi degildir",number);
}