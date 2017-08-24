#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
  int data;
  struct node* next;
};


void insert(node **head)
{
char c;
  struct node *temp; 
  do
  {
  temp=(struct node*)malloc(sizeof(struct node)); 
  
  if(temp==NULL)
  {
  printf("OVERFLOW");
  return;
  }
  printf("enter your data\n");
  scanf("%d",&temp->data);
  if(*head==NULL)
  {
  *head=temp;
  temp->next=*head;
  
  }
  else
  {
  temp->next=*head;
  struct node *p=*head;
  while((p->next)!=*head)
  {
  p=p->next;
  }
  p->next=temp;
  *head=temp;
  }
  
  printf("Y/N");
  c=getche();
  }while(c!='n');
}
void insert_end(node **head)
{
char c;
  struct node *temp; 
  do
  {
    printf("enter number\n");
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
  {
  printf("OVERFLOW");
  return;
  }
    scanf("%d",&temp->data);
  temp->next=NULL;
  
  if(*head==NULL)
  {
  *head=temp;
  temp->next=*head;
  
  }
  else
  {
    node *p=*head;
    temp->next=*head;
      while(p->next!=(*head))
      {
      p=p->next;
      }
      p->next=temp;
  }
  
  printf("Y/N");
  c=getche();
  }while(c!='n');
}
void delete_(node **head)
{

if(*head==NULL)
{
printf("UNDERFLOW");
return;
}
struct node* k;
k=*head;
while(k->next!=(*head))
{
k=k->next;
}
*head=(*head)->next;
k->next=*head;

}

void delete_end(node **head)
{
if(*head==NULL)
{
printf("UNDERFLOW");
return;
}
struct node *temp,*prev;
temp=(*head)->next;

prev=*head;
while(temp->next!=(*head))
{
prev=temp;
temp=temp->next;
}
prev->next=*head;
}

void display(node **head)
{
	struct node* link=NULL;
	if(*head!=NULL)
	{
	link=(*head)->next;
	printf("%d ",(*head)->data);
	if((*head)->next!=(*head))
		printf("->");
	}
	else
	{
	printf("NULL");
	}
	while(link!=*head)
	{
	    printf("%d ",link->data);
	    link=link->next;
	    if(link==(*head))
	    {
	    break;
	    }
	    printf("->");
	    
	}
}

int main()
{
  int z;
  struct node* head=NULL;
  while(1)
  {
  printf("enter your choice:");
  scanf("%d",&z);
  switch(z)
  {
  case 1:
      insert(&head);
  break;
case 2:
insert_end(&head);
break;
case 3:
  display(&head);
  break;
   case 4:
   	delete_(&head);
   	break;
   case 5:
   	delete_end(&head);
   	break;
  default:
  return 0;
 	}
 	  }
 	  getch();
 	  return 0;
}
