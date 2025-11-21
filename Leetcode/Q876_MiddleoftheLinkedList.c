#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *middleNode(struct ListNode *head)
{
    struct ListNode *fast = head;
    struct ListNode *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

// Utility: Create new node
struct ListNode *createNode(int val)
{
    struct ListNode *node = malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

// Utility: Print list
void printList(struct ListNode *head)
{
    while (head)
    {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    /*
        Example:
        1 -> 2 -> 3 -> 4 -> 5

        Middle = 3

        If even number:
        1 -> 2 -> 3 -> 4 -> 5 -> 6
        Middle returned = 4
    */

    struct ListNode *head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    printf("List: ");
    printList(head);

    struct ListNode *mid = middleNode(head);

    printf("Middle Node Value = %d\n", mid->val);

    return 0;
}
