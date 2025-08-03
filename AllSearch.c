#include<stdio.h>

int recursion(int n);
int main()
{
    int num1, num2, size ,i , j, fibo , factorial;
    printf("Enter fibo size: ");
    scanf("%d",&size);
    num1 = 0;
    num2 = 1 ;
    printf("%d %d ", num1 , num2);

    // fibonacci

    for(i = 2 ; i < size ; i++)
    {
       fibo = num1 + num2;
       printf("%d " , fibo) ;

       num1 = num2;
       num2 = fibo ;
    }

     // Factorial
     printf("\nEnter Your Factorial Number: ");
     scanf("%d", &factorial);

     int result = recursion(factorial);
     printf("The Factorial is: %d", result);

     // search array
    int a[100],arrSize , search , found = 0;
    printf("\nEnter array size: ");
    scanf("%d",&arrSize);

    for(i = 0 ; i < arrSize ; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("the array is: \n");
    for(i = 0 ; i < arrSize ; i++)
    {
        printf("%d\t", a[i]);
    }

    // Linear Search

    printf("\nType your search element: ");
    scanf("%d",&search);

    for(i = 0; i < arrSize ; i++)
    {
        if(a[i] == search)
        {
            printf("\nThe Item position: %d\n", i + 1);
            found = 1;
            break;
        }

    }

    if(found == 0)
    {
        printf("\nNo Element Found");
    }

    printf("Do You want to sorting the array? if Yes! Which Type? \n");
    printf("select Type:\n 1.Bubble Sort\n 2.Selection Sort");

    int type;
    scanf("%d", &type);
    if(type == 1){

    // bobble short
    for(i = 0; i < arrSize ; i++)
    {
        for(j = 0 ; j < arrSize - 1 - i; j++)
        {
            if(a[j]> a[j+1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j+1] = temp;
            }
        }
    }

    printf("\nAfter Bubble Sort: \n");
    for(i = 0 ; i < arrSize ; i++)
      {
        printf("%d\t", a[i]);
      }
    }
    else
    {
        //selection Sort

    int min_idx;
    for(i = 0 ; i < arrSize ; i++)
    {
        min_idx = i ;
        for(j = i + 1; j < arrSize ; j++)
        {
            if(a[j] < a[min_idx])
                min_idx = j;
        }

        int temp = a[i];
        a[i] = a[min_idx];
        a[min_idx] = temp;
    }

    printf("\nAfter Selection Sort: \n");
    for(i = 0 ; i < arrSize ; i++)
      {
        printf("%d\t", a[i]);
      }
    }

    int start = 0 , last = arrSize - 1 , middle , item , binary = 0;
    printf("\nEnter Your Search Element (Binary Search): ");
    scanf("%d" , &item);

    while(start <= last)
    {
         middle = (last + start)/2;
            if(a[middle] == item)
            {
                printf("\nItem found Position:  %d", middle + 1);
                binary = 1;
                break;
            }else if(a[middle] < item)
            {
                start = middle + 1;
            }else
            {
                last = middle - 1 ;
            }

    }

    if(binary == 0)
    {
        printf("Item Not Found");
    }

    return 0;
}


int recursion(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }else
    {
        return n * recursion(n-1);
    }
}

