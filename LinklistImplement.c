#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node *next;
};
struct Node *head;

// functions
void create(int);
void display();

int main()
{
	// Variable Decleration
  int n;
  
  // number of node in Linklist
  printf("Enter n node in linklist ");
  scanf("%d",&n);
  
  // function for create Linklist
  create(n);
  
  // function dispaly for display original Linklist and reverse Linklist
  display();
}


// create function
void create(int n)
{
    struct Node *temp,*fnode;
    int i,value;
    head=(struct Node*)malloc(sizeof(struct Node));

    if(head==NULL)
    {
        printf("Empty element");
    }else{
        printf("Enter node1 ");
        scanf("%d",&value);
        head->data=value;
        head->next=NULL;
        temp=head;
    for(i=1;i<n;i++)
    {
        fnode=(struct Node*)malloc(sizeof(struct Node));
        if(fnode==NULL)
        {
            printf("No memory allocate");
        }else{
            printf("Enter node&d",i+1);
            scanf("%d",&value);
            fnode->data=value;
            fnode->next=NULL;
            temp->next=fnode;
            temp=temp->next;
        }
    }
    }
}


// display function
void display()
{
    struct Node *temp;
    temp=head;

    if(head==NULL)
    {
        printf("Empty Linklist");
    }
    else{
    	printf("\nOutput\n");
        while(temp!=NULL)
        {
	        printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
