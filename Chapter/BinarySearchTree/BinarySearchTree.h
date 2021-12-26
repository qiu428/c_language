#ifndef __BINARYSEARCHTREE_H
#define __BINARYSEARCHTREE_H

#include<stdbool.h>

/* 根据情况重新定义Item */
#define SLEN 20
typedef struct item
{
    char petname[SLEN];
    char petkind[SLEN];
}Item;

#define MAXITEMS 10

typedef struct trnode
{
    Item item;
    struct trnode* left;    /* 指向左分支的指针 */
    struct trnode* right;   /* 指向右分支的指针 */
}Trnode;

typedef struct tree
{
    Trnode *root;   /* 指向根节点的指针 */
    int size;   /* 数的项数 */
}Tree;

/* 函数原型 */

/**
 * @brief 把树初始化为空
 * 
 * @param ptree 指向一个树
 */
void InitializeTree(Tree *ptree);

bool TreeIsEmpty(const Tree *ptree);

bool TreeIsFull(const Tree *ptree);

int TreeItemCount(const Tree *ptree);

bool AddItem(const Item *pi,Tree *ptree);

bool InTree(const Item *pi,const Tree *ptree);

bool DeleteItem(const Item *pi, Tree *ptree);

void Traverse(const Tree * ptree,void(*pfun)(Item item));

void DeleteALL(Tree * ptree);



#endif