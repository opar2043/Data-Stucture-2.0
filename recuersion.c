#include<stdio.h>

int factorial(int n);

int main()
{
    int num , result;

    printf("Enter Positive number for factorial: ");
    scanf("%d", &num);

    result = factorial(num);
    printf("Factorial : %d", result);

    return 0;
}

int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}
