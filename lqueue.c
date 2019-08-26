#include<stdio.h>
#include<stdlib.h>
#define size 10

void enqueue(int q[], int *r)
{
	int item;
	if(*r == size-1)
		printf("Queue is ful \n");
	else
	{
		printf("Enter value to be added:  ");
		scanf("%d" ,&item);
		(*r)++;
		q[*r]=item;
	}
}
void dequeue(int q[], int *r, int *f)
{
	if(*f> *r)
		printf("Queue is empty \n");
	else
	{
		printf("Element deleted ");
		(*f)++;
	}
}
void display(int q[], int *f, int *r)
{
	int i;
	if(*f>*r)
		printf("Nothing to display");
	else
	{
		for(i=*f; i<=*r; i++)
			printf("%d\n", q[i]);
	}
}
void main()
{
	int q[20];
	int r=-1;
	int f=0;
	int a;
	while(1)
	{
		printf("1. Enter \n");
		printf("2. Delete \n");
		printf("3. Display \n");
		printf("4. Exit \n");
		printf("Choose an option ");
		scanf("%d" ,&a);
		switch(a)
		{
			case 1: enqueue(q, &r);
				break;
			case 2:	dequeue(q, &r, &f);
				break;
			case 3: display(q, &f, &r);
				break;
			case 4: exit(0);
			default:printf("Invalid option");
		}
	}
}

