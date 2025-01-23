#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int countTwoChildren(struct Node* root) {
    if (root == NULL)
        return 0;
int count = 0;
    if (root->left != NULL && root->right != NULL)
       count = 1;
    return count + countTwoChildren(root->left) + countTwoChildren(root->right);
}
int main() {
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    printf("Number of nodes with two children: %d\n", countTwoChildren(root));

    return 0;
}
