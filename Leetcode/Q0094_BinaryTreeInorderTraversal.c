#include <stdio.h>
#include <stdlib.h>

/* Definition for a binary tree node. */
struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *inorderTraversal(struct TreeNode *root, int *returnSize)
{
    int *ans = (int *)malloc(sizeof(int) * 100);
    int k = 0;

    int top = -1;
    struct TreeNode *stack[100];
    struct TreeNode *curr = root;

    while (curr != NULL || top != -1)
    {
        while (curr != NULL)
        {
            stack[++top] = curr;
            curr = curr->left;
        }
        curr = stack[top--];
        ans[k++] = curr->val;
        curr = curr->right;
    }

    *returnSize = k;
    return ans;
}

/* Helper to create new node */
struct TreeNode *newNode(int val)
{
    struct TreeNode *node = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = node->right = NULL;
    return node;
}

/* Sample main() for testing */
int main()
{
    /*
         4
        / \
       2   5
      / \
     1   3
    */

    struct TreeNode *root = newNode(4);
    root->left = newNode(2);
    root->right = newNode(5);
    root->left->left = newNode(1);
    root->left->right = newNode(3);

    int returnSize;
    int *result = inorderTraversal(root, &returnSize);

    printf("Inorder Traversal: ");
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result); // Caller frees result array
    return 0;
}
