#include<stdio.h>
#include<stdbool.h>

#define CAPACITY 5

int ourQueue[CAPACITY];
int front =0 , rear =-1,totalItem =0;

bool isFull(){
if(totalItem==CAPACITY){
    return true;
}
return false;
}
bool isEmpty(){
    if(totalItem == 0){
        return true;
    }
    return false;
}
void enqueue(int item){
    if(isFull()){
        printf("Sorry,the Queue is full.\n");
        return ;
    }
    rear = (rear+1)%CAPACITY;
    ourQueue[rear]=item;
    totalItem++;
}
int dequeue(){
    return 0;
}
void printQueue(){
int i;
printf("Queue:");
for(i=0;i<CAPACITY;i++){
    printf("%d",ourQueue[i]);
}
printf("\n");
}
int main()

{
    printf("implement our queue.\n\n");
    enqueue(10);
    enqueue
    return 0;

}
