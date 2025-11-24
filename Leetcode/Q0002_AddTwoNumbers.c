#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2);

// Utility function to create a new node
struct ListNode *createNode(int data)
{
    struct ListNode *newNode = malloc(sizeof(struct ListNode));
    newNode->val = data;
    newNode->next = NULL;
    return newNode;
}

// Utility function to print list
void printList(struct ListNode *head)
{
    while (head)
    {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

// Utility function to free list
void freeList(struct ListNode *head)
{
    struct ListNode *temp;
    while (head)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{
    // ------------ List 1: 2 -> 4 -> 3 ------------
    struct ListNode *l1 = createNode(2);
    l1->next = createNode(4);
    l1->next->next = createNode(3);

    // ------------ List 2: 5 -> 6 -> 4 ------------
    struct ListNode *l2 = createNode(5);
    l2->next = createNode(6);
    l2->next->next = createNode(4);

    printf("List 1: ");
    printList(l1);

    printf("List 2: ");
    printList(l2);

    // ------------ Add Two Numbers ------------
    struct ListNode *result = addTwoNumbers(l1, l2);

    printf("Sum   : ");
    printList(result);

    // ------------ Free memory ------------
    freeList(l1);
    freeList(l2);
    freeList(result);

    return 0;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode *p1 = l1;
    struct ListNode *p2 = l2;
    struct ListNode *head = NULL;
    struct ListNode *tail = NULL;
    int carry = 0;
    while (p1 != NULL || p2 != NULL || carry != 0)
    {
        int x = (p1 != NULL) ? p1->val : 0;
        int y = (p2 != NULL) ? p2->val : 0;

        int sum = x + y + carry;
        carry = sum / 10;
        sum = sum % 10;

        struct ListNode *ans = malloc(sizeof(struct ListNode));
        ans->val = sum;
        ans->next = NULL;
        if (head == NULL)
        {
            head = ans;
            tail = ans;
        }
        else
        {
            tail->next = ans;
            tail = ans;
        }
        if (p1)
            p1 = p1->next;
        if (p2)
            p2 = p2->next;
    }
    return head;
}
