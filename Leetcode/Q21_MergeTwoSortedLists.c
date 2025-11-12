#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list
struct ListNode
{
    int val;
    struct ListNode *next;
};

// Function prototype
struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2);

// Helper function to create a new node
struct ListNode *createNode(int val)
{
    struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Helper function to print a linked list
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
    // ✅ Create first sorted list: 1 -> 3 -> 5
    struct ListNode *list1 = createNode(1);
    list1->next = createNode(3);
    list1->next->next = createNode(5);

    // ✅ Create second sorted list: 2 -> 4 -> 6
    struct ListNode *list2 = createNode(2);
    list2->next = createNode(4);
    list2->next->next = createNode(6);

    // ✅ Merge both lists
    struct ListNode *mergedList = mergeTwoLists(list1, list2);

    // ✅ Print merged result
    printf("Merged Linked List: ");
    printList(mergedList);

    // ✅ Free memory (optional for short test)
    struct ListNode *temp;
    while (mergedList)
    {
        temp = mergedList;
        mergedList = mergedList->next;
        free(temp);
    }

    return 0;
}

// Your mergeTwoLists() function
struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    struct ListNode head;
    struct ListNode *temp = &head;
    head.next = NULL;

    while (list1 && list2)
    {
        if (list1->val >= list2->val)
        {
            temp->next = list2;
            list2 = list2->next;
        }
        else
        {
            temp->next = list1;
            list1 = list1->next;
        }
        temp = temp->next;
    }

    if (list1)
        temp->next = list1;
    else
        temp->next = list2;

    return head.next;
}
