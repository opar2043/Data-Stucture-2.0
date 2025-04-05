 // Rijaon Rashid Opar
 // CSE-2302029019

 #include<stdio.h>
 int main()
 {
     int a[6] = {1,3,5,7,34 ,99};

     int pos , i , value , size = 6;

     printf("Which Position want to delete?");
     scanf("%d" , &pos);

     if(pos > size  || pos < 0){
        printf("Enter A valid Postion");
        return 0 ;
     }

     for(i = pos - 1; i < size -1 ; i++){
        a[i] = a[i+1];

     }
     a[size - 1] = 0;
     size-- ;

     for(int i=0 ; i <= size - 1 ; i++){
        printf("%d\t", a[i]);
     }
     return 0;
 }
