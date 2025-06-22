/*
#include<stdio.h>
int main()
{
    int a[10] = {1,2, 5,7,9,4,11, 14,3,8};
    int item , i ,j , size = 10;

    printf("The array is : ");
    for(i = 0 ; i < size ; i++){
        printf("%d\t", a[i]);
    }

    printf("\n\nWhich element do you want to search? ");
    scanf("%d\n", &item);

    // bubble sort code
    for(i = 0 ; i < size - 1; i++){
        for(j = 0 ; j < size - 1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("\n\nAfter Sorting : ");
    for(i = 0 ; i < size ; i++){
        printf("%d\t", a[i]);
    }

    // binary search code

    int front = 0 , last = size - 1;

    while(front <= last){
        int middle = (front + last) / 2 ;
    if(a[middle] == item){
        printf("Item is in index : %d\n", middle);
        return 0;
    }else if(a[middle] > item)
    {
        last = middle - 1;
    }else{
      front = middle + 1;
    }
    }
     printf("Item Not Found!");

    return 0;
}
*/

#include <stdio.h>

int main() {
    int a[10] = {1, 2, 5, 7, 9, 4, 11, 14, 3, 8};
    int item, i, j, size = 10;

    printf("The array is: ");
    for (i = 0; i < size; i++) {
        printf("%d\t", a[i]);
    }

    printf("\n\nWhich element do you want to search? ");
    scanf("%d", &item);  // fixed scanf

    // Bubble Sort
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nAfter Sorting: ");
    for (i = 0; i < size; i++) {
        printf("%d\t", a[i]);
    }

    // Binary Search
    int front = 0, last = size - 1;

    while (front <= last) {
        int middle = (front + last) / 2;
        if (a[middle] == item) {
            printf("\nItem found at index: %d\n", middle);
            return 0;
        } else if (a[middle] > item) {
            last = middle - 1;
        } else {
            front = middle + 1;
        }
    }

    printf("\nItem Not Found!\n");

    return 0;
}


