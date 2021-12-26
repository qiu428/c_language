#include <stdlib.h>
#include <stdio.h>
#include "SinglyLinkedLists.h"

/* 局部函数原型 */

static struct lnode *MakeNode(const Element *pe);

/* 函数定义 */
void InitList(List *plist)
{
    plist->head = NULL;
    plist->size = 0;
}

int ListIsEmpty(const List *plist)
{
    return plist->head == NULL ? ture : false;
}

int ListIsFull(const List *plist)
{
    return plist->size == MAXLISTS ? ture : false;
}

int AddElement(const Element *pe, List *plist)
{
    if (ListIsFull(plist))
    {
        fprintf(stderr, "ERROR:The lists is full\n");
        return false;
    }
    if (ListIsEmpty(plist))
    {
        plist->head = MakeNode(pe);
    }
    else
    {
        Lnode *temp = plist->head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = MakeNode(pe);
    }
    plist->size++;
    return ture;
}

int DelElement(List *plist)
{
    if (ListIsEmpty(plist))
    {
        fprintf(stderr, "ERROR:The lists is full\n");
        return false;
    }
    else
    {
        Lnode *del = plist->head;
        while (del->next->next != NULL)
            del = del->next;
        free(del->next);
        del->next = NULL;
    }
    plist->size--;
    return ture;
}

void EmptyTheList(List *plist)
{
    if (!ListIsEmpty(plist))
    {
        Lnode *del,*temp;
        temp=plist->head;
        InitList(plist);
        while(temp!=NULL)
        {
            del=temp;
            temp=temp->next;
            free(del);
        }
    }
}

void Traverse(const List *plist, void (*pfun)(Element element))
{
    Lnode *pnode = plist->head;
    while (pnode != NULL)
    {
        (*pfun)(pnode->element);
        pnode = pnode->next;
    }
}

/* 局部函数定义 */

static struct lnode *MakeNode(const Element *pe)
{
    Lnode *new_node = malloc(sizeof(Lnode));
    if (new_node == NULL)
    {
        exit(EXIT_FAILURE);
    }
    new_node->element = *pe;
    new_node->next = NULL;
    return new_node;
}