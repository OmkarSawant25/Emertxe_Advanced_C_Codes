#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode
{
    int val;
    struct ListNode *next;
};

int getDecimalValue(struct ListNode *head)
{
    struct ListNode *temp = head;
    int len = 0;
    int num = 0;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    for (int i = len - 1; i >= 0; i--)
    {
        if (head->val == 1)
        {
            num = num | (1 << i);
        }
        head = head->next;
    }
    return num;
}

// Utility function to create new node
struct ListNode *createNode(int val)
{
    struct ListNode *newNode = malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

int main()
{
    /*
        Example Linked List: 1 -> 0 -> 1
        Binary = 101 = 5
    */

    struct ListNode *head = createNode(1);
    head->next = createNode(0);
    head->next->next = createNode(1);

    int result = getDecimalValue(head);
    printf("Decimal Value = %d\n", result);

    return 0;
}
