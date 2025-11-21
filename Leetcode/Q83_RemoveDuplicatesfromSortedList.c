#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *deleteDuplicates(struct ListNode *head)
{
    struct ListNode *temp = head;
    struct ListNode *prev = NULL;

    while (temp)
    {
        if (prev != NULL && prev->val == temp->val)
        {
            prev->next = temp->next;
            temp = temp->next;
        }
        else
        {
            prev = temp;
            temp = temp->next;
        }
    }
    return head;
}

// Utility function to create node
struct ListNode *createNode(int val)
{
    struct ListNode *newNode = malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Utility to print linked list
void printList(struct ListNode *head)
{
    while (head != NULL)
    {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

int main()
{

    /*
        Create example list:
        1 -> 1 -> 2 -> 3 -> 3

        After removing duplicates:
        1 -> 2 -> 3
    */

    struct ListNode *head = createNode(1);
    head->next = createNode(1);
    head->next->next = createNode(2);
    head->next->next->next = createNode(3);
    head->next->next->next->next = createNode(3);

    printf("Original List: ");
    printList(head);

    head = deleteDuplicates(head);

    printf("After Removing Duplicates: ");
    printList(head);

    return 0;
}
