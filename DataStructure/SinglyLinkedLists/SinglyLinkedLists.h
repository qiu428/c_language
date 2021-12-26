#pragma once

#include <limits.h>
#define MAXLISTS INT_MAX
enum Bool
{
    false,
    ture
};
/* 元素的声明 */
typedef struct element
{
    int number;
} Element;

/* 链表的声明 */
typedef struct lnode
{
    Element element;
    struct lnode *next; /* 指向下一个节点 */
} Lnode;

typedef struct list
{
    int size;              /* 链表的长度 */
    struct lnode *head; /* 头节点 */
} List;

/* 函数原型 */

void InitList(List *plist);

int ListIsEmpty(const List *plist);

int ListIsFull(const List *plist);

int AddElement(const Element *pe,List *plist);

int DelElement(List *plist);

void Traverse(const List *plist, void (*pfun)(Element element));

void EmptyTheList(List *plist);
