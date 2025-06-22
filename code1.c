#include<stdio.h>
int main()
{
    int a[10] = {1,2, 5,7,9,4,11};
    int item , i , size = 8;
    for(i = 0 ; i < size ; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
    printf("Which element?");
    scanf("%d" , &item);

    for(i = 0; i < size ; i++){
        if(item == a[i]){
        printf("Found in index %d\n", i);
        return 0;
    }
    }


    printf("Doest not Found");
    return 0;
}
