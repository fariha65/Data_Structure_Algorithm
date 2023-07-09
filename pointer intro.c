#include<stdio.h>
int main()
{
  int x,y,add,temp;
  int *p,*q;
  printf ("\nEnter 2 integer number: ");
  scanf("%d %d",&x,&y);
  p=&x;
  q=&y;
  add=*p+*q;
  //swapping value
  temp=*p;
  *p=*q;
  *q=temp;
  printf("addition = %d\n",add);
  printf("After swapping x is %d & y is %d",*p,*q);



}
