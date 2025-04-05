 // Rijaon Rashid Opar
 // CSE-2302029019

 #include<stdio.h>
 int main()
 {
     int a[7] = {2,3,5,7,4,8,1};
     int i ,j  , temp , size = 7;

     for(i = 0 ; i < size ; i++){
        for (j = 0; j < size - 1 - i; j++) {
             if(a[j] > a[j+1]){
                temp = a[j];
               a[j] = a[j+1];
               a[j+1] = temp;
            }
        }
     }
     for(i = 0; i < size ; i++){
        printf("%d\t", a[i]);
     }
     return 0;
 }



