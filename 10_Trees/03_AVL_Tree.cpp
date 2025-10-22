#include<iostream>
using namespace std;

class Node {
    public:
    int data, height;
    Node * left, * right;

    Node(int value) {
        data = value;
        height = 1;
        left = right = nullptr;
    }
};

// Code to print Preorder Traversal
void preOrder(Node * root) {
    if(!root) return;

    cout << root -> data << " ";
    preOrder(root -> left);
    preOrder(root -> right);
}

// Code to print Inorder Traversal
void inOrder(Node * root) {
    if(!root) return;

    inOrder(root -> left);
    cout << root -> data << " ";
    inOrder(root -> right);
}

// Function to get height of the tree
int getHeight(Node * root) {
    if(!root)
    return 0;

    return root -> height;
}

// Function to get balance of the tree
int getBalance(Node * root) {
    return getHeight(root -> left) - getHeight(root -> right);
}

// Right Rotation
Node * rightRotation(Node * root) {
    Node * rootChild = root -> left;
    Node * childChild = rootChild -> right;

    // Reconnecting Nodes
    root -> left = childChild;
    rootChild -> right = root;

    // Update the height
    root -> height = 1 + max(getHeight(root -> left), getHeight(root -> right));
    rootChild -> height = 1 + max(getHeight(rootChild -> left), getHeight(rootChild -> right));
    
    return rootChild;
}

// Left Rotation
Node * leftRotation(Node * root) {
    Node * rootChild = root -> right;
    Node * childChild = rootChild -> left;

    // Reconnecting Nodes
    root -> right = childChild;
    rootChild -> left = root;

    // Update the height
    root -> height = 1 + max(getHeight(root -> left), getHeight(root -> right));
    rootChild -> height = 1 + max(getHeight(rootChild -> left), getHeight(rootChild -> right));

    return rootChild;
}

Node * insert(Node * root, int key) {
    // ? Node doesn't exists
    if(!root)
    return new Node(key);

    // ? Node Exists
    // Left Side
    if(key < root -> data)
    root -> left = insert(root -> left, key);

    // Right Side
    else if(key > root -> data)
    root -> right = insert(root -> right, key);

    // Duplicate Elements not allowed
    else
    return root;

    // Updating Height while Returning
    root -> height = 1 + max(getHeight(root -> left), getHeight(root -> right));

    // Balancing Check
    int balance = getBalance(root);

    // Left Left Unbalancing Case
    if(balance > 1 && root -> left -> data > key) {
        return rightRotation(root);
    }

    // Right Right Unbalancing Case
    else if(balance < -1 && root -> right -> data < key) {
        return leftRotation(root);
    }

    // Left Right Unbalancing Case
    else if(balance > 1 && root -> left -> data < key) {
        root -> left = leftRotation(root -> left);
        return rightRotation(root);
    }

    // Right Left Unbalancing Case
    else if(balance < -1 && root -> right -> data > key){
        root -> right = rightRotation(root -> right);
        return leftRotation(root);
    }

    // No Unbalancing
    else { 
        return root;
    }
}

int main() {
    // Duplicate element not allowed
    Node * root = nullptr;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 50);
    root = insert(root, 70);
    root = insert(root, 5);
    root = insert(root, 100);
    root = insert(root, 95);

    cout << "Preorder :" << endl;
    preOrder(root);

    cout << "Inorder :" << endl;
    inOrder(root);
}