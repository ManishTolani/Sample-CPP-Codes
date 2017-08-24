#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int data;
    struct node* next;
};

void insert(struct node **head,struct node **p)
{
    char c;
      struct node *temp; 
      do
      {
        temp=(struct node*)malloc(sizeof(struct node)); 
        printf("\nenter your data ");
        scanf("%d",&temp->data);
        if(*head==NULL)
      	{
          temp->next=*head;
          *head=temp;
          *p=temp;
     	}
      else
      {
          temp->next=*head;
          *head=temp;  
      }
        printf("y/n ");
        c=getche();
      }while(c!='n');
}


void insert_end(struct node **head,struct node **p)
{
  char c;
    struct node *temp; 
    do
    {
        printf("\nenter number ");
        temp=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&temp->data);
      temp->next=NULL;
      if(*head==NULL)
      {
          *head=temp;
          *p=temp;
      }
      else
      {
          (*p)->next=temp;
          *p=temp;
      }
      printf("y/n ");
      c=getche();
    }while(c!='n');
}

void delete_(struct node **head)
{
  struct node* k;
  k=*head;
  *head=(*head)->next;
}

void display(struct node **head)
{
    struct node* link=*head;
    while(link!=NULL)
    {
    	if(link!=*head)
    	{
    		printf("-> ");
		}
        printf("%d ",link->data);   
        link=link->next;
    }
}

int main()
{
      int z;
      struct node *root=NULL,*end=NULL;
      while(1)
      {
          printf("enter your choice: ");
          scanf("%d",&z);
          switch(z)
          {
              case 1:
                  insert(&root,&end);
                  break;
              case 2:
                  insert_end(&root,&end);
                  break;
              case 3:
                  delete_(&root);
                  break;
              case 4:
                  display(&root);
                  break;
              default:
                  return 0;
          }
      }
        getch();
        return 0;
}

