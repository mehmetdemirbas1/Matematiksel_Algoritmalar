
#include <assert.h>
#include <stdio.h>
int isPalindrome(int number)
{
    int reversedNumber = 0;
    int originalNumber = number;
    while (number != 0)
    {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    return (originalNumber == reversedNumber);
}

int main()
{
    int number;
    printf("Bir sayi giriniz: ");
    (void)scanf("%d",&number);
    if (isPalindrome(number))
        printf("%d Palindrome bir sayidir.",number);

    else
        printf("%d Palindrome bir sayi degildir.",number);
        
    return 0;
}