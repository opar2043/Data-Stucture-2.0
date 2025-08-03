#include<stdio.h>
int main()
{
    int num1 = 0, num2 = 1, fibo, size;
    printf("Enter Positive number for Fibonacci Size: ");
    scanf("%d", &size);
    printf("fibonacci series : %d %d ", num1, num2);
    for (int i = 3; i <= size; i++)
    {
        fibo = num1 + num2;
        printf("%d ", fibo);
        num1 = num2;
        num2 = fibo;
;
    }
    return 0;
}
