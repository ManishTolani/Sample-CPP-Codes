#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int data;
    struct node* next;
};

struct node* head=NULL,*p=NULL;

void insert()
{
    char c;
      struct node *temp; 
      do
      {
	      temp=(struct node*)malloc(sizeof(struct node)); 
	      printf("\nenter your data ");
	      scanf("%d",&temp->data);
	      if(head==NULL)
		  {
		      head=temp;
		      p=temp;
		  }
		  else
		  {
		      temp->next=head;
		      head=temp;  
		  }
	      printf("y/n ");
	      c=getche();
      }while(c!='n');
}


void insert_end()
{
	char c;
	  struct node *temp; 
	  do
	  {
		    printf("\nenter number ");
		    temp=(struct node*)malloc(sizeof(struct node));
		    scanf("%d",&temp->data);
		  temp->next=NULL;
		  if(head==NULL)
		  {
		      head=temp;
		      p=temp;
		  }
		  else
		  {
		      p->next=temp;
		      p=temp;
		  }
		  printf("y/n ");
		  c=getche();
	  }while(c!='n');
}

void delete_()
{
	struct node* k;
	k=head;
	head=head->next;
}

void display()
{
	  struct node* link=head;
	  while(link!=NULL)
	  {
	  	if(link!=head)
	  	{
	  		printf("->");
		}
	      printf("%d ",link->data);   
	      link=link->next;
	  }
}

int main()
{
      int z;
      while(1)
      {
          printf("enter your choice: ");
          scanf("%d",&z);
          switch(z)
          {
              case 1:
                  insert();
                  break;
              case 2:
                  insert_end();
                  break;
              case 3:
                  display();
                  break;
              case 4:
                  delete_();
                  break;
              default:
                  return 0;
         	}
     	}
     	  getch();
     	  return 0;
}
