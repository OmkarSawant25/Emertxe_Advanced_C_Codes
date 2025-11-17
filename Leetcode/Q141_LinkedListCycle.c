#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

bool hasCycle(struct ListNode *head) {
    struct ListNode *slow = head;
    struct ListNode *fast = head;

    while (fast && fast->next) {
        slow = slow->next;          
        fast = fast->next->next;    

        if (slow == fast)
            return true;            
    }
    return false;                   
}

// Function to create a new node
struct ListNode* newNode(int val) {
    struct ListNode* temp = malloc(sizeof(struct ListNode));
    temp->val = val;
    temp->next = NULL;
    return temp;
}

int main() {
    // ----------------------------
    // 1) Create list WITHOUT cycle
    // ----------------------------
    struct ListNode *head1 = newNode(1);
    head1->next = newNode(2);
    head1->next->next = newNode(3);
    head1->next->next->next = newNode(4);

    printf("List 1 has cycle? : %s\n", hasCycle(head1) ? "YES" : "NO");

    // ----------------------------
    // 2) Create list WITH cycle
    // ----------------------------
    struct ListNode *head2 = newNode(10);
    head2->next = newNode(20);
    head2->next->next = newNode(30);
    head2->next->next->next = newNode(40);

    // Create cycle: last node points back to node with value 20
    head2->next->next->next->next = head2->next;

    printf("List 2 has cycle? : %s\n", hasCycle(head2) ? "YES" : "NO");

    return 0;
}
