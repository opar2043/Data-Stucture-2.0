// Rijaon Rashid Opar
// CSE-2302029019

 #include<stdio.h>
 int arr[10];
 int front = 0 , end = -1;
 int totalItem = 0;

 int isFull()
 {
     return totalItem == 10;
 }

 int isEmpty()
 {
     return totalItem == 0;
 }

 void enqueue(int x)
 {
    if(isFull()) {
        printf("Queue is full\n");
        printf("\n");
        return;
    }
     end =(end + 1)% 10;
     arr[end]= x;
     totalItem ++;
     printf("Queued: %d\n",x);
     return 0;
 }

  void dequeue()
 {
     if(isEmpty()){
        printf("queue is empty!\n");
        return ;
     }
     int value = arr[front];
     front = (front + 1) % 10;
     totalItem--;
     printf("Dequeued: %d\n", value);
     return -1;
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
