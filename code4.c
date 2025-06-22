#include<stdio.h>
int arr[10];
 int front = 0 , rear = -1;
 int totaitem = 0;

 int isFull(){
   return totaitem == 10;
 }

 int isEmpty(){
   return totaitem == 0;
 }

 void enqueue(int x){
   if(isFull()){
     printf("Queue full");
     return 0;
   }

   rear = (rear + 1) % 10;
   arr[rear] = x;
   printf("Enqued %d\n", x);
   totaitem++ ;
   return 0;
 }


 void dequeue(){
  if(isEmpty()){
    printf("Item is Empty");
    return 0;
  }

  int value = arr[front];
  front = (front + 1) % 10;
  printf("DEEqued %d\n", value);
  totaitem--;
  return 0;

 }
 void printArr(){
  for(int i = 0; i<10 ; i++){
    printf("%d\t", arr[i]);
  }
 }
int main()
{

     enqueue(10);
     enqueue(20);
     dequeue();
     enqueue(40);
     enqueue(30);
     enqueue(288);
     printArr();
    return 0;
}

