#include "StdTypes.h"
#include "stdio.h"
#include "stdlib.h"


typedef struct s
{
    uint32 data;
    struct s* next;
}Node;

Node** Creat_List(void);

void InsertToList(Node** list,uint32 data,uint8 position);

void PrintList(Node** list);

void DeleteInList(Node** list,uint8 position);

void DeleteList(Node** list);

uint8 SearchInList(Node** list,uint32 data);

void Reverse (Node** list);

void Length(Node** list);

