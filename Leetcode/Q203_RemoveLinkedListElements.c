#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *removeElements(struct ListNode *head, int val)
{
    struct ListNode *temp = head;
    struct ListNode *prev = NULL;

    while (temp)
    {
        if (temp->val == val && prev == NULL)
        {
            head = temp->next;
            temp = temp->next;
        }
        else if (temp->val == val && prev != NULL)
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

// Create new node
struct ListNode *createNode(int val)
{
    struct ListNode *newNode = malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Print list
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
        Example:
        List  : 1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6
        Value to delete = 6

        Result:
        1 -> 2 -> 3 -> 4 -> 5
    */

    struct ListNode *head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(6);
    head->next->next->next = createNode(3);
    head->next->next->next->next = createNode(4);
    head->next->next->next->next->next = createNode(5);
    head->next->next->next->next->next->next = createNode(6);

    printf("Original List: ");
    printList(head);

    head = removeElements(head, 6);

    printf("Updated List: ");
    printList(head);

    return 0;
}
