#include<stdio.h>
#include<conio.h>
#include<process.h>
#define stack_size 20

void push(int *top, int stack[])
{
	if(*top==stack_size)
		printf("Array is full\n");
	else
	{
		(*top)++;
		printf("Enter the item:  ");
		scanf("%d" ,&stack[*top]);
	}
}

void pop(int *top, int stack[])
{
	if(*top==-1)
		printf("Array is empty");
	else
	{
		printf("The item popped is %d \n",stack[*top]);
		(*top)--;
	}
}

void display(int *top, int stack[])
{
	if(*top == -1)
		printf("Stack is empty\n");
	else
	{
		int i;
		for(i=0;i<=*top;i++)
			printf("%d\n" ,stack[i]);
	}
}

void main()
{
	int stack[stack_size], top=-1,a;
	clrscr();
	while(1)
	{
		printf("1. Add item\n");
		printf("2. Remove item\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		printf("Enter option:  ");
		scanf("%d", &a);
		switch(a)
		{
			case 1: push(&top, stack);
					break;
			case 2: pop(&top, stack);
					break;
			case 3: display(&top, stack);
					break;
			case 4: exit(0);
			default:printf("Invalid option");
		}
	}
	getch();
}