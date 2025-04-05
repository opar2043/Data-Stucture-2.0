

 // Rijaon Rashid Opar
 // CSE-2302029019

 #include<stdio.h>
 int arr[10];
 int front = 0 , end = -1;
 int totalItem = 0;

 void isFull()
 {
     return totalItem == 10;
 }

 void isEmpty()
 {
     return totalItem == 0;
 }

 void enqueue(int x)
 {
     if(isFull){
      printf("Queue is full\n");
      return ;
     }
     end =(end + 1)% totalItem;
     arr[end]= x;
     totalItem ++;
     printf("Endqued:%d)
 }

  void dequeue()
 {
     return -1;
 }
 int main()
 {

     return 0;
 }
