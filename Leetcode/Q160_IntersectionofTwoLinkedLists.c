#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode
{
    int val;
    struct ListNode *next;
};

// Function to find intersection node
// struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
// {
//     struct ListNode *a = headA;
//     while (a != NULL)
//     {
//         struct ListNode *b = headB;
//         while (b != NULL)
//         {
//             if (a == b)
//                 return a; // same memory node → intersection
//             b = b->next;
//         }
//         a = a->next;
//     }
//     return NULL;
// }

struct ListNode *call(struct ListNode *a, struct ListNode *b, int d)
{
    while (d)
    {
        d--;
        b = b->next;
    }
    while(a != b)
    {
        b = b->next;
        a = a->next;
    }
    return a;
}

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
    struct ListNode *t1 = headA;
    int N1 = 0, N2 = 0;
    struct ListNode *t2 = headB;

    while (t1 != NULL)
    {
        N1++;
        t1 = t1->next;
    }
    while (t2 != NULL)
    {
        N2++;
        t2 = t2->next;
    }

    if (N1 < N2)
    {
        return call(headA, headB, N2 - N1);
    }
    else
    {
        return call(headB, headA, N1 - N2);
    }
}

// Helper function to create a new node
struct ListNode *createNode(int val)
{
    struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Helper function to print a list
void printList(struct ListNode *head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}

// Example usage
int main()
{
    // Creating two linked lists that intersect
    struct ListNode *common = createNode(8);
    common->next = createNode(10);

    struct ListNode *headA = createNode(3);
    headA->next = createNode(7);
    headA->next->next = common; // intersection starts here

    struct ListNode *headB = createNode(99);
    headB->next = createNode(1);
    headB->next->next = common; // intersection starts here

    printf("List A: ");
    printList(headA);
    printf("List B: ");
    printList(headB);

    struct ListNode *result = getIntersectionNode(headA, headB);

    if (result)
        printf("Intersection at node with value: %d\n", result->val);
    else
        printf("No intersection found.\n");

    return 0;
}
