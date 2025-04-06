// Rijaon Rashid Opar
// CSE-2302029019

#include<stdio.h>
int main()
{
    int a[7] = {1,3,14,25,27,38,40};
    int i,size = 7,item;
    int start = 0, last =  size - 1;

    for(int i = 0; i<10 ; i++){
    printf("%d\t", arr[i]);
    }

    printf("Which Item Want to Search? ");
    scanf("%d", &item);
    while(start <= last)
    {
            int middle = (start + last) / 2;
            if(a[middle] == item)
            {
                printf("Item found at Position: %d", middle);
                return 0;
            }
            else if(a[middle] < item)
            {
                start = middle + 1;
            }
            else
            {
                last = middle - 1;
            }
    }

    printf("Item Not Found!");
    return 0;
}
