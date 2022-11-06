#include <stdio.h>
#define evenOrOdd(number) number % 2 == 0 ? printf("Number is Even ") : printf("Number is Odd");
int checkEvenOdd();
int main()
{
    checkEvenOdd();
    return 0;
}

int checkEvenOdd()
{

    int number = 0;

    printf("Enter a number : ");
    scanf("%d", &number);
    evenOrOdd(number);
}