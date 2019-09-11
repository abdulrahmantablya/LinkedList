#include "LinkedList.h"



Node** Creat_List(void)
{


	Node** head=(Node**)malloc(sizeof(Node*));

	*head=NULL;

    return head;
}

void InsertToList(Node** list,uint32 data,uint8 position)
{

	Node* NewNode=(Node*)malloc(sizeof(Node));

	if(*list==NULL)
	{
		(*list)=NewNode;
		(*list)->data=data;
		(*list)->next=NULL;
		return;
	}

	if(position==0)
	{
		NewNode->next=(*list);
		NewNode->data=data;
		(*list)=NewNode;
		return;
	}

	uint8 i;

	Node* current=*list;
	Node* previous=NULL;

	for(i=0;i<position;i++)
	{
		previous=current;
		current=current->next;
	}

	NewNode->data=data;

	previous->next=NewNode;
	NewNode->next=current;

}

void PrintList(Node** list)
{
    if( (*list) == NULL)
    {
        printf("List is empty\n\n");
    }

	Node* ptr=*list;
	printf("*********************************************************\n\n");
	printf("\n[Head]->");
	while( ptr != NULL )
	{
		printf("[%d]->",ptr->data);
		ptr=ptr->next;
	}
	printf("[NULL]\n");
	printf("*********************************************************\n\n");
}

void DeleteInList(Node** list,uint8 position)
{

    Node* delete_ptr=NULL;

    if((*list)== NULL)
    {
        printf("List is empty\n\n");
        return;
    }

    if(position == 0)
    {
        delete_ptr = *list;
        (*list)=(*list)->next;
        free(delete_ptr);
    }

    uint8 i;

    Node* current = *list;
    Node* previous =NULL;

    for(i=0;i<position;i++)
    {
        previous=current;
        current=current->next;
    }

    delete_ptr=current;

    current=current->next;

    previous->next=current;

    free(delete_ptr);

}

void DeleteList(Node** list)
{
    if( (*list) == NULL )
    {
        printf("List is empty\n\n");
        return;
    }

    Node* deleted_ptr = *list;
    Node* next_deleted_ptr = NULL;


    while(deleted_ptr != NULL)
    {
        next_deleted_ptr = deleted_ptr->next;
        free(deleted_ptr);
        deleted_ptr = next_deleted_ptr;
    }

    (*list)=NULL;
}

uint8 SearchInList(Node** list,uint32 data)
{
    if((*list) == NULL)
    {
        printf("List is empty\n\n");
    }

    Node* ptr= *list;

    uint8 i=0;

    while( ptr != NULL )
    {
        if(ptr->data == data)
        {
            printf(" your data->[%d] is found in %d \n\n",data,i);
            return i;
        }
        else
        {
            ptr=ptr->next;
            i++;
        }
    }

    printf("your data doesn't exist\n\n");

}


void Reverse (Node** list)
{
    Node* current=*list;
    Node* next=NULL;
    Node* previous=NULL;

    while(current != NULL)
    {
        next=current->next;
        current->next=previous;
        previous=current;
        current=next;
    }
    *list=previous;
}


void Length(Node** list)
{
    if( (*list) == NULL)
    {
        printf("List is empty\n\n");
    }

    uint8 i=0;

	Node* ptr=*list;
	while( ptr != NULL )
	{
	    i++;
		ptr=ptr->next;
	}
	printf("Length = [ %d ]\n",i);
}
