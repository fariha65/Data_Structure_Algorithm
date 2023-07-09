#include<stdio.h>
using namespace std;

struct node
{
    int data;
    node* next;
};
node* head=NULL;
int main()
{
int x,n,i;
cout<<"How many data want to input: ";
cin<<n;
cout<<"Input your data : ";
cin>>x;
node* temp1=head;
node* temp= new node();
temp -> data =x;
temp -> next =NULL;

head= temp;
for(i=0;i<n;i++)
{
    cin>>x;
    node* temp= new node();
    temp->data=x;
    temp->next=NULL;
    temp1=head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next= temp;
    print ();
}

}
void print()
{
   node* temp=head;
   cout<<"List is:";
   while(temp!= NULL)
   {
       cout<<temp->data;
       cout<<" ";
       temp=temp->next;
   }
   cout<<endl;
}
