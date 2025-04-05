 // Rijaon Rashid Opar
 // CSE-2302029019

 #include<stdio.h>
 int stack[], top = -1;
 void push(int x)
 {
     top = top + 1;
     stack[top] = x;
     printf("Item Added : %d\n", x);
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

 void peek()
 {
     if(top < 0){
       printf("There is No More Item!\n");
       return 0;
     }
     printf("Item's here at the top is: %d\n", stack[top]);
     return -1;
 }

 int main()
 {
    push(2);
    peek();
    push(10);
    push(20);
    pop();
    push(30);
    peek();
    push(40);
    push(55);

     return 0;
 }
