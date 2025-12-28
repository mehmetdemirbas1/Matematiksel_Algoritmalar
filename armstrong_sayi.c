#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int ndigit(int val)
{
    int digit_count = 0;
    if (val == 0)
    {
        return 1;
    }

    while (val)
    {
        ++digit_count;
        val /= 10;
    }

    return digit_count;
}


int isArmstrong(int x)
{
    
    int n = ndigit(x);
    int temp = x, sum = 0;
    while (temp)
    {
        int r = temp % 10;
        sum += pow(r, n);
        temp = temp / 10;
    }

    if (sum == x)
        return 1;
    else
        return 0;
}

int main()
{
    int number = 0;
    printf("Bir sayi giriniz:");
    (void)scanf("%d", &number);

    if (isArmstrong(number))
        printf("%d bir armstrong sayidir.", number);
    else
        printf("%d bir armstrong sayi degildir.", number);

}