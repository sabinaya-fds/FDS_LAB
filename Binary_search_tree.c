#include <stdio.h>
#include <stdlib.h>
// Define the structure for a BST node
struct Node {
 int data;
 struct Node* left;
 struct Node* right;
};
// Function to create a new node
struct Node* createNode(int value) {
 struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 if (newNode == NULL) {
 printf("Memory allocation failed!\n");
 exit(1);
 }
 newNode->data = value;
 newNode->left = NULL;
 newNode->right = NULL;
 return newNode;
}
// Function to insert a value into the BST
struct Node* insert(struct Node* root, int value) {
 // If the tree/subtree is empty, return a new node
 if (root == NULL) {
 return createNode(value);
 }
 // Otherwise, recur down the tree
 if (value < root->data) {
 root->left = insert(root->left, value);
 } else if (value > root->data) {
 root->right = insert(root->right, value);
 } else {
 printf("Duplicate value %d ignored.\n", value);
 }
 return root;
}
// Function to search for a value in the BST
struct Node* search(struct Node* root, int key) {
 // Base Cases: root is null or key is present at root
 if (root == NULL || root->data == key) {
 return root;
 }
