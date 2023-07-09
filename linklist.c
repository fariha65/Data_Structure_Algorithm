#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
	int roll;
	char name[20];
	struct node *next;
};
struct node *head;

void insert_node()
{
	int r;
	char nam[20];

 struct	node *New =(struct node*)malloc(sizeof(struct node));

	printf("Enter roll: ");
	scanf("%d",&r);
	printf("\nEnter name: ");
	scanf("%s",nam);

	if(head==NULL)
	{

		New->roll=r;
		strcpy(New->name,nam);
		New->next=NULL;

		head=New;
	}
	else
	{
		int n,m,i;

		printf("1: Insert from front\n");
		printf("2: Insert after specified number of nodes\n");
		scanf("%d",&n);

		switch(n)
		{
			case 1:

				New->roll=r;
				strcpy(New->name,nam);
				New->next=head;

				head=New;
				break;


			case 2:

				printf("\nEnter the node number:");
				scanf("%d",&m);

				int flag=0;

			struct	node *temp1;
				temp1=head;

				for(i=1;i<m;i++)
				{
					temp1=temp1->next;
					if(temp1==NULL)
					{
						printf("\nNode does not exist");
						flag=1;
						break;
					}

				}

				if(flag==0)
				{
					New->roll=r;
					strcpy(New->name,nam);
					New->next=temp1->next;

					temp1->next=New;
				}
				else
					break;

		}
	}
}




void display_node()
{
struct	node *tt;

	if(head==NULL)
		printf("\n...NO Item in Link List...\n");

	else
	{
		tt=head;

		while(tt!=NULL)
		{
			printf("\nRoll No: %d",tt->roll);
			printf("\nName: %s\n",tt->name);
			tt=tt->next;
		}
	}
}






int main()
{
	int input;

	head=NULL;

	while(1)
	{
		printf("\n-- Menu Selection --\n");
		printf("0) Quit\n");
		printf("1) Insert\n");
		printf("2) Display\n");
		printf("Enter choice: ");
		scanf("%d", &input);

		switch(input)
		{
			case 0:
			default:
				printf("Goodbye......\n");
				exit(0);
				break;

			case 1:
				printf("Insertion.....\n");
				insert_node();
				break;

			case 2:
				printf("Display.....\n");
				display_node();
				break;



				return 0;
		}
	}
}

