#include<stdlib.h>
#include<stdio.h>

typedef struct node
{
  int data;
  struct node *next;
}*Node;

Node getnode()
{
  Node p;
  p=(Node) malloc (sizeof(Node));
  if(p!=NULL)
    return p;
  else
    {
      printf("Memory is not allocated");
      exit(0);
    }
}

Node insertb(Node front,int item)
{
  Node p;
  p=getnode();
  p->data=item;
  p->next=front;
  front=p;
  return front;
}

Node inserte(Node front,int item)
{
  Node p,q;
  q=getnode();
  q->data=item;
  q->next=NULL;
  if(front==NULL)
     return q;
  p=front;
  while(p->next!=NULL)
     p=p->next;
  p->next=q;
  return front;
}

void display(Node front)
{
  Node p;
  if(front==NULL)
    {
      printf("list is empty\n");
    }
  else
    {
      p=front;
      printf("Element in the list: ");
      while(p!=NULL)
        {
          printf("%d ",p->data);
          p=p->next;
         }
      printf("\n");
     }
}

int main()
{
  Node front=NULL;
  int a,ele;
     while(1)
	{	
     printf("\n1)Insert in the beginning\n2)Insert in the end\n3)Display list\n4)Exit\n");
     printf("Enter your choice: "); 
     scanf("%d",&a);
     switch(a)
       {
         case 1: printf("Enter the element to be inserted: ");
                 scanf("%d",&ele);
                 front=insertb(front,ele);
                 break;
         case 2: printf("Enter the element to be inserted: ");
                 scanf("%d",&ele);
                 front=inserte(front,ele);
                 break;
         case 3: display(front);
                 break;
         case 4: exit(0);
         default: printf("Invalid choice\n");
       }
    }
  return 0;
}
