#include "LinkedList.h"

int main ()
{
	Node** list1;
	list1 = Creat_List();
	InsertToList(list1,10,0);
	InsertToList(list1,20,1);
	InsertToList(list1,30,2);

	PrintList(list1);

    Reverse(list1);

    PrintList(list1);

    Length(list1);


}
