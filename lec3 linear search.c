#include<stdio.h>
int main()
{
    int a[100],i,key,l=0,n;
    printf("\nEnter the size of array:");
    scanf("%d",&n);
    printf("\nEnter %d elements of array:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a Search key:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
    if(key==a[i]){
    l=i;
    printf("key is %d \n which located in %d",a[i],l);
    }

    }
    if(l==0)
    printf("item is not found.");
}
