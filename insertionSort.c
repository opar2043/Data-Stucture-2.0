// Insertion Sort
// Rijoan Rashid Opar
// CSE-2302029019
//Best case (already sorted): O(n)
//Worst case (reverse order): O(n²)

#include<stdio.h>
int main()
{
    int a[5] = {5,7,3,12,6};
    int value , hole , i;

    for(i = 0; i <5 ; i++)
    {
        printf("%d\t", a[i]);
    }
      printf(" \n\n");
    for(i = 1; i < 5 ; i++)
    {
        value = a[i];
        hole = i;

        while(hole > 0 && a[hole - 1] > value)
        {
            a[hole] = a[hole -1];
            hole --;
        }
        a[hole] = value;
    }


    printf("Sorted Array : \n");
    for(i = 0; i <5 ; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
