#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *a = Null;
    struct Node *b = Null;
    struct Node *c = Null;
    a =(struct Node*)maloc(sizeof(struct Node));
    b = (struct Node*)maloc(sizeof(struct Node));
    c = (struct Node*)maloc(sizeof(struct Node));
    a->data =10;
    b->data=20;
    c->data=30;
     a->next =b;
    b->next=c;
    c->next= Null;
    while(a!=Null)
    {
        printf("%d ->" ,a->data);
        a= a->next;
    }

}
