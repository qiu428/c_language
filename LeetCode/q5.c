#include <stdio.h>
#include <stdlib.h>
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2);
struct ListNode *MakeNode(const int x);
struct ListNode *AddList(int arr[], int len);
struct ListNode *AddList(int arr[], int len)
{
    struct ListNode *new_list;
    struct ListNode *temp;
    for (int i = 0; i < len; i++)
    {
        if (i == 0)
        {
            new_list = MakeNode(arr[i]);
            temp = new_list;
        }
        else
        {
            temp->next = MakeNode(arr[i]);
            temp = temp->next;
        }
    }
    return new_list;
}

struct ListNode *MakeNode(const int x)
{
    struct ListNode *new_node;
    new_node = (struct ListNode *)malloc(sizeof(struct ListNode));
    if (new_node != NULL)
    {
        new_node->val = x;
        new_node->next = NULL;
    }
    return new_node;
}

int main(void)
{
    int arrl1[] = {2, 4, 3, 2};
    int arrl2[] = {5, 6, 4};
    struct ListNode *l1, *l2, *l3;
    l1 = AddList(arrl1, 4);
    l2 = AddList(arrl2, 3);
    l3 = addTwoNumbers(l1, l2);

    return 0;
}

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode *sum = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *temp = sum;
    int num = 0;
    int carry = 0;
    while (l1 != NULL || l2 != NULL || carry)
    {
        num = (l1 == NULL ? 0 : l1->val) + (l2 == NULL ? 0 : l2->val) + carry;
        carry = num / 10;
        num %= 10;
        temp->val = num;
        if (l1 != NULL)
            l1 = l1->next;
        if (l2 != NULL)
            l2 = l2->next;
        if (l1 || l2 || carry)
        {
            temp->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            temp = temp->next;
        }
        else
        {
            temp->next = 0;
        }
    }
    return sum;
}