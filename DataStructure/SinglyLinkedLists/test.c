#include "SinglyLinkedLists.h"
#include <stdio.h>

void PrintList(List *plist);
void PrintElement(Element element);

int main(int argc, char const *argv[])
{
    List lists;
    Element e;
    InitList(&lists);
    for (int i = 0; i < 5; i++)
    {
        e.number = i;
        AddElement(&e, &lists);
    }
    PrintList(&lists);
    EmptyTheList(&lists);
    return 0;
}

void PrintElement(Element element)
{
    printf("%d\n", element.number);
}
void PrintList(List *plist)
{
    Traverse(plist, PrintElement);
}