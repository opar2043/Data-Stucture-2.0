
 // Rijaon Rashid Opar
 // CSE-2302029019

 #include<stdio.h>
 int main()
 {
     int arr[6] = {2,3,5,7,4,8};
     int i , item , size = 6;

     printf("Which Array Element? ");
     scanf("%d/n", &item);

     for(i = 0 ; i < size ; i++){
        if(arr[i] == item){
            printf("Item Found in Position: %d", i+1);
            return 0;
        }
     }
     printf("Item Not Found!");
     return 0;
 }
