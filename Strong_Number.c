#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Factorial(int fac)
{
	if (fac == 0 || fac == 1)
		return 1;

	return fac * Factorial(fac - 1);
}
 int is_Strong(int number)
 {
        if (number < 0)
        return 0;

    int sum = 0;
    int originalNumber = number;
    while (originalNumber != 0){
        int remainder = originalNumber % 10;
        int fac=remainder;
        sum+=Factorial(fac);
        originalNumber /=10;
    }

    return sum;
 }
 int main()
 {
    int number;
    printf("Bir sayi giriniz:");
    (void)scanf("%d",&number);

    if(number == is_Strong(number))
        printf("%d Bir Strong sayidir.",number);
    else
        printf("%d Bir Strong sayi degildir.",number);
 }