#include<stdio.h>
#include<stdlib.h>
#define size 4
int top=-1,inarray[size];
void push()
{
    int x;
    if(top==size -1){
        printf("\nOverflow!!");
    }
    else
        printf("push element:");
    scanf("%d",&x);
    top=top+1;
    inarray[top]=x;

}
void pop(){
 if(top==-1)
    printf("underflow!");
 else
    printf("pop element:%d",inarray[top]);
 top=top-1;
 }
 void show(){
 if(top==-1)
 {
     printf("underflow");
 }
 else{
        printf("show element:\n");
 for(int i=top;i>=0;--i)
 {
     printf("%d",inarray[i]);
 }

 }
 }

int main()
{
 int choice;
 while(1){
    printf("enter your choice\n1.push\n2.pop\n3show.\n4.exit.\n");
    scanf("%d",&choice);
 switch (choice)
 {
 case 1:
    push();
    break;
 case 2:
    pop();
    break;
 case 3:
    show();
    break;
 case 4:
    exit(0);
    default:
    printf("invalid choice");
 }
}
}
