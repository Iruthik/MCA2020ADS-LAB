#include<stdio.h>
#include<conio.h>
int stack[10],choice,size,top,num,i;
void push(void);
void pop(void);
void display(void);
void main(void){
top=-1;
clrscr();
printf("Enter size of stack (max 10):");
scanf("%d",&size);
printf("\n1 for push\n2for pop\n3 for display\n4 for exit");
do {
    printf("\nEnter the choice:");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        printf("\nEXIT");
        break;
    default:
        printf("\nInvalid choice");
    }
} while (choice != 4);
getch();
}

void push(){
if(top>=size-1){
  printf("\nStack is in overflow ");
}
else{
printf("\nEnter number to push:");
scanf("%d",&num);
top++;
stack[top]=num;
}
}
void pop(){
if(top<=-1){
printf("\nUnder flow");
}
else{
  printf("\nPopped number:%d",stack[top]);
  top--;
}
}
void display(){
if(top>=0){
  printf("\nNumbers in the stack:\n");
    for(i=top;i>=0;i--)
       printf("\n%d",stack[i]);
    printf("\nNext choice:");
 }
 else
     printf("\n stack contain no numbers");
}