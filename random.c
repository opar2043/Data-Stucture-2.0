#include<stdio.h>
int main()
{
    int a[5] = {34,3,6,2,10};

    int i , min, j , temp;

    for(i = 0 ; i< 5 ; i++)
    {
        min = i;

        for(j= i+1; j < 5 ; j++)
        {
            if(a[j] < a[min])
                min = j;
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;

    }

    printf("Sorted Array : \n");
    for(i = 0; i <5 ; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
