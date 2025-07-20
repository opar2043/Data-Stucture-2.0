// Selection Sort
// Rijoan Rashid Opar
// CSE-2302029019
//Best case (already sorted): O(n)
//Worst case (reverse order): O(n²)

#include <stdio.h>
int main()
{
    int a[5] = {4,2,11,8,6};
    int i, min_idx , j , temp;

    for(i = 0 ; i < 5 ; i++)
    {
        min_idx = i;

        for(j = i + 1; j < 5 ; j++)
        {
            if(a[j] < a[min_idx])
               min_idx = j ;
        }

        temp = a[i];
        a[i] = a[min_idx];
        a[min_idx] = temp;

    }

    printf("Sorted Array : \n");
    for(i = 0; i <5 ; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
