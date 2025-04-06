 // Rijaon Rashid Opar
 // CSE-2302029019

 #include<stdio.h>
 int main()
 {
     int a[6] = {1,3,5,7,34 ,99};
     int pos , i , value , size = 6;

     for(i = 0 ; i<size ; i++){
        printf("%d\t", a[i]);
     }
     printf("\n");
     printf("Which Position ? ");
     scanf("%d" , &pos);
     printf("The Value Is : ");
     scanf("%d" , &value);

     for(i = 0 ; i < size ; i++){
        a[pos-1] = value;
     }

     for( i=0 ; i < size + 1 ; i++){
        printf("%d\t", a[i]);
     }
     return 0;
 }
