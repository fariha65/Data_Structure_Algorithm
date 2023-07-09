#include<stdio.h>
int main()
{
    int a[100],i,n,key,loc=0,s,m,e;
    printf("\nEnter array size:");
    scanf("%d",&n);
    printf("\nenter %d elements : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n enter a search key:");
    scanf("%d",&key);
    s=1;
    e=n-1;
    m=(s+e)/2;
    while (s<=e){
        if(key<a[m]){
        e=m-1;
        }
        else{
        s=m+1;}

         m=(s+e)/2;
        if (key==a[m]){
            loc=m+1;
            printf("key is %d & location is %d",a[m],loc);
            break;
            }}

           if(loc==0){
            printf("\n item is not in list.");}
}

