#include<stdlib.h>
#include<stdio.h>

struct node
{
  int data;
  struct node *next;
};
typedef struct node *Node;

Node getnode()
{
  Node x;
  x=(Node) malloc (sizeof(Node));
  if(x!=NULL)
    return x;
  else
    {
      printf("Memory is not allocated");
      exit(0);
    }
}



Node insert_end(Node first,int item)
{
  Node temp,x;
  x=getnode();
  x->data=item;
  x->next=NULL;
  if(first==NULL)
     return x;
  temp=first;
  while(temp->next!=NULL)
     temp=temp->next;
  temp->next=x;
  return first;
}


 
 
 
Node sort(Node first)
{
Node temp1,temp2,head;
head=first;
int swap;
//second=first->next;
if(first==NULL)
printf("EMPTY\n");
else
{
for(temp1=first;temp1->next!=NULL;temp1=temp1->next)
{
for(temp2=temp1->next;temp2!=NULL;temp2=temp2->next)
{

if(temp1->data>temp2->data)
{swap=temp1->data;
temp1->data=temp2->data;
temp2->data=swap;
}

}


}
}


return head;
}
Node merging(Node first1,Node first2)
{
Node temp=first1;
while(first1->next!=NULL)
{
first1=first1->next;
}
first1->next=first2;
return temp;
}

Node reverse(Node first)
{
Node curr,prev,temp;
prev=NULL;
curr=first;

while(curr!=NULL)
{
temp=curr->next;
curr->next=prev;
prev=curr;
curr=temp;
}
first=prev;
return  first;
}
void display(Node first)
{
  Node temp;
  if(first==NULL)
    {
      printf("list is empty\n");
    }
  else
    {
      temp=first;
      printf("Element in the list: ");
      while(temp!=NULL)
        {
          printf("%d ",temp->data);
          temp=temp->next;
         }
      printf("\n");
     }
}

int main()
{
  Node first1=NULL;
  Node first2=NULL;
  int a,value,pos;
  while(1)
{

printf("1.insert list 1\n");
printf("2.insert list 2\n");
printf("3.sorted list 1\n");
printf("4.sorted list 2\n");
printf("5.MERG\n");
printf("6.reverse\n");

printf("7.exit\n");
scanf("%d",&a);
    switch(a)
        {
         case 1: printf("Enter the element to be inserted: ");
                 scanf("%d",&value);
                 first1=insert_end(first1,value);
                 break;
         case 2: printf("Enter the element to be inserted: ");
                 scanf("%d",&value);
                 first2=insert_end(first2,value);
                 break;
          case 3: first1=sort(first1);
           display(first1);
           break;
          case 5: first1=merging(first1,first2);
           display(first1);
           break;
         case 4:  first2=sort(first2);
           display(first2);
           break;
         case 6: first1=reverse(first1);
            display(first1);
            break;
     
         case 7: exit(0);
         default: printf("Invalid choice\n");
       }
    }
  return 0;
}
