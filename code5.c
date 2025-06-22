
#include<stdio.h>
int main()
{
    int a[6] = {1,2,5,7,9,4};
    int pos , i , value , size = 6;

     for(i = 0 ; i<size ; i++){
        printf("%d\t", a[i]);
     }

     printf(" Which Position want to insert\n");
     scanf("%d\n", &pos);

     printf("The value is ?");
     scanf("%d", &value);

    for(i = size ; i >= pos ; i--){
        a[i] = a[i-1];
    }

    a[pos - 1] = value;
    size++;

     for(i = 0 ; i<size ; i++){
        printf("%d\t", a[i]);
     }

    return 0;
}

