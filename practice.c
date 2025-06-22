/**
#include<stdio.h>
int main()
{
    int arr[] = {1,0,4,67,4,5,10};
    int i , searchItem , pos ,size = 7;

     for(i = 0 ; i<size ; i++){
        printf("%d\t",arr[i]);
     }
    printf("\n");
    printf("Search Your Item: ");
    scanf("%d", &searchItem);

    for(i = 0; i< size ; i++)
    {
        if(arr[i]==searchItem){
            printf("Item Found in Position: %d", i+1);
            return 0;
        }
    }
    printf("Not Found");
    return 0;
}

#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,87,100};
    int i, item , left , right , middle;
    int size = 8;
    left = 0;
    right = size -1;

     for(i = 0 ; i<size ; i++){
        printf("%d\t",arr[i]);
     }

     printf("\n");
     printf("Which Array Element? ");
     scanf("%d/n", &item);


    while(left <= right){

    middle = (left + right) / 2;
    if(item == arr[middle]){
        printf("Item found at middle: %d/t", middle + 1);
        return 0;
    }else if(item < arr[middle])
    {
        right = middle - 1;

    }
    else
    {
        left = middle + 1;
    }
    }
    printf("Not Found");
    return 0;
}

**/

#include<stdio.h>
int main()
{
    int num , result;
    scanf("%d", &num);
    result = sum(num);

    printf("%d" , result);
    return 0;
}

int sum(int x)
{
    if(x == 1)
    {
        return 1;
    }else
    {
        return x-sum(x-1);
    }
}
