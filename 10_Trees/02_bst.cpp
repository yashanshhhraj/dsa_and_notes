#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node * left, * right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Function to create the Binary Search Tree
Node * createBST(Node * root, int value) {
    if(!root)
    return new Node(value);

    // Left Side
    if(root -> data > value) 
    root -> left = createBST(root -> left, value);

    // Right Side
    else 
    root -> right = createBST(root -> right, value);

    return root;
}

// Function to print Inorder Traversal
void inorder(Node * root) {
    if(!root) return;

    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}

// Function to check if a node with given value is present in the BST or not
bool searchBST(Node* root, int key) {
    if(!root) return false;
    
    if(root -> data == key) return true;
    
    if(root -> data > key)
    return searchBST(root -> left, key);
    
    else
    return searchBST(root -> right, key);
}

// Function to delete a node in BST
Node * deleteNode(Node * root, int key) {
    // If the node does not exist
    if(!root) return nullptr;

    if(root -> data > key) {
        root -> left = deleteNode(root -> left,key);
        return root;
    }

    else if(root -> data < key) {
        root -> right = deleteNode(root -> right, key);
        return root;
    }

    else {
        // It is a Leaf Node
        if(!root -> left && !root -> right) {
            delete root;
            return nullptr;
        }

        // It has only Single Child Node
        else if(!root -> left || !root -> right) {
            Node  * temp;

            if(!root -> left)
            temp = root -> right;

            else if(!root -> right)
            temp = root -> left;

            delete root;
            return temp;
        }

        // It has both the Child Nodes
        else {
            Node  * parent = root;
            Node  * child = root -> left;

            while(child -> right) {
                parent = child;
                child = child -> right;
            }

            if(parent == root) {
                child -> right = parent -> right;
                delete parent;
                return child;
            }

            else {
                parent -> right = child -> left;
                child -> left = root -> left;
                child -> right = root -> right;
                delete root;
                return child;
            }
        }
    }
}

int main() {
    // ? Creating BST from array
    int arr[] = {3, 5, 1, 6, 7, 8, 9, 20, 13, 23};

    Node * root = nullptr;

    for(int i = 0; i < 10; i++)
    root = createBST(root, arr[i]);

    // ? Inorder Traversal
    inorder(root);
    cout << endl;

    // ? Searching an Element in BST
    // int target = 23;
    // cout << searchBST(root, target) << endl;

    inorder(deleteNode(root, 43));
}