#include<stdio.h>
 int stack[5];
 int top = -1 ;
 int totalItem = 0;

 void push(int x){

   if(totalItem == 5 ){
     printf("Stack is Full!");
     return 0 ;
   }

   top = top + 1;
   stack[top] = x;
   totalItem++;

   printf("Push the Item - %d\n", x);
   return 0;
 }

 void pop()
 {
     if(top >= 0){
        top = top - 1;
        printf("%d Removed\n", stack[top]);
        return 0;
     }
     printf("There is No More Item!\n");
     return -1;
 }

 void peek(){
  if(top == -1){
    printf("no item here");
     return 0;
  }
    printf("Item's here at the top is: %d\n", stack[top]);
 }

void printArr(){
  for(int i = 0; i<10 ; i++){
    printf("%d\t", stack[i]);
  }
 }

int main()
{
    push(10);
    push(20);
    pop();
    peek();
    push(40);
    peek();
    printArr();
    return 0;
}
