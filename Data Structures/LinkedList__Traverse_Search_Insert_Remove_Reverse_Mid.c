/******************************************************************************

Linked List Implementation.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h> 

/***Node structure***/
struct Node { 
    int data; 
    struct Node* next; 
};
struct Node* head=NULL; /***make the head pointer global to be used in every function***/

void traverse(struct Node* n)
{
   printf("----------------TRAVERSING-----------------\n");
   struct Node* presentNode=n;
   if (presentNode==NULL)
   {
       printf("EMPTY LINKED LIST\n");
       
   }
   while(presentNode)
   {
       printf("Data=%d and Reference=%u\n",presentNode->data,presentNode->next);
       presentNode=presentNode->next;
   }
}

void insert_beginning(int new_data)
{
    printf("----------------INSERTING NODE AT THE BEGINNING-----------------\n");
    struct Node* new_node=NULL;
    new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node==NULL)
    {
        printf("INSERTION UNSUCCESSFUL: MEMORY USAGE FULL\n");
        
    }
    else
    {
        new_node->data=new_data;
        new_node->next=head;
        head=new_node;
        printf("INSERTION SUCCESSFUL\n");
    }
}

void insert_end(int new_data)
{
    printf("----------------INSERTING NODE AT THE END-----------------\n");
    struct Node* new_node=NULL;
    new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node==NULL)
    {
        printf("INSERTION UNSUCCESSFUL: UNABLE TO ALLOCATE MEMORY\n");
        
    }
    else
    {
        struct Node* presentNode=head;
        while (presentNode->next)
        {
            presentNode=presentNode->next;
        }
        new_node->data=new_data;
        presentNode->next=new_node;
        new_node->next=NULL;
        printf("INSERTION SUCCESSFUL\n");
    }
    
}

void insert_between(int new_data, struct Node*before)
{
    printf("----------------INSERTING NODE IN BETWEEN-----------------\n");
    struct Node* new_node=NULL;
    new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node==NULL)
    {
        printf("INSERTION UNSUCCESSFUL: UNABLE TO ALLOCATE MEMORY\n");
        
    }
    else
    {
        new_node->data=new_data;
        new_node->next=NULL;
        struct Node* presentNode=head;
        while (presentNode->next!=before)
        {
            presentNode=presentNode->next;
        }
        new_node->next=presentNode->next;
        presentNode->next=new_node;
        printf("INSERTION SUCCESSFUL\n");
    }
}

void delete_first()
{
    printf("----------------DELETING THE FIRST NODE-----------------\n");
    struct Node* del_node=head;
    if(head==NULL)
    {
        printf("LINKED LIST IS EMPTY\n");
    }
    else
    {
        head=head->next;
        free(del_node);
        printf("NODE DELETED\n");
    }
}

void delete_last()
{
    printf("----------------DELETING THE LAST NODE-----------------\n");
    struct Node* del_node=NULL;
    if(head==NULL)
    {
        printf("LINKED LIST IS EMPTY\n");
    }
    else
    {
        if (head->next==NULL)
        {
            free(head);
            head=NULL;
        }
    
        else
        {
            struct Node* presentNode=head;
            while (presentNode->next->next)
            {
                presentNode=presentNode->next;
            }
            del_node=presentNode->next;
            presentNode->next=NULL;
            free(del_node);
            printf("NODE DELETED\n");
        }
    }
}

void search_data(int data_find)
{
    printf("--------------SEARCHING------------\n");
    struct Node* presentNode=head;
    int flag=0;
    while (presentNode)
    {
        if (presentNode->data==data_find)
        {
            flag=1;
            break;
        }
        presentNode=presentNode->next;
        
    }
    if (flag==1)
    {
        printf("Number Present\n");
    }
    else
    {
        printf("Number not found\n");
    }
}

int count_nodes()
{
    printf("--------------COUNTING NODES------------\n");
    struct Node* presentNode=head;
    int count=0;
    while (presentNode)
    {
        count+=1;
        presentNode=presentNode->next;
    }
    printf("count=%d\n",count);
    return count;
}

void find_mid()
{
    int count=count_nodes();
    int i;
    struct Node* presentNode=head;
    struct Node* nextNode=NULL;
    for(i=0;i<(count-1)/2;i++)
    {
      presentNode=presentNode->next;
      if (i==(((count-1)/2)-1))
        if (count%2==0)
        {
          nextNode=presentNode->next;
          printf("Even number of nodes present:%d,%d\n",presentNode->data,nextNode->data);
        }
        else
          printf("Odd number of nodes present:%d\n",presentNode->data);
    }
}

void remove_node(int data_del)
{
   struct Node* presentNode=head;
   struct Node* delNode=NULL;
   int flag=0;
   if (presentNode->data==data_del)
   {
       free(presentNode);
   }
   else
   {
        while(presentNode->next)
        {
            if(presentNode->next->data==data_del)
            {
                flag=1;
                delNode=presentNode->next;
                presentNode->next=presentNode->next->next;
                free(delNode);
                break;
            }
            presentNode=presentNode->next;
        }
        if (flag==0)
            printf("Node Not Found");
   }
}

struct Node* reverse_LL()
{
    struct Node* presentNode=head;
    struct Node* prevNode=NULL;
    struct Node* nextNode=head->next;
    while(nextNode)
    {
        presentNode->next=prevNode;
        prevNode=presentNode;
        presentNode=nextNode;
        nextNode=presentNode->next;
    }
    presentNode->next=prevNode;
    head=presentNode;
    return head;
}

int main()
{
    /***Create pointer***/
    struct Node* n1=NULL;
    struct Node* n2=NULL;
    
    /***Allocate memory***/
    head = (struct Node*)malloc(sizeof(struct Node)); 
    n1 = (struct Node*)malloc(sizeof(struct Node)); 
    n2 = (struct Node*)malloc(sizeof(struct Node));
    
    /***Assign Data and Link Nodes***/
    head->data=1;
    head->next=n1;
    
    n1->data=2;
    n1->next=n2;
    
    n2->data=3;
    n2->next=NULL;
    
    traverse(head);
    insert_beginning(10);
    traverse(head);
    insert_end(60);
    traverse(head);
    insert_between(100,n1);
    traverse(head);
    delete_first();
    traverse(head);
    delete_last();
    traverse(head);
    search_data(100);
    count_nodes();
    find_mid();
    remove_node(2);
    traverse(head);
    reverse_LL();
    traverse(head);
    return 0;
}
