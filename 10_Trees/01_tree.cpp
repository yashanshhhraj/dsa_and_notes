#include<iostream>
#include<queue>
using namespace std;

class treeNode {
    public:
    int data;
    treeNode * left, * right;

    treeNode(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Building a Binary Tree
treeNode * binaryTree() {
    int x;
    cin >> x;

    if(x == -1) return nullptr;

    treeNode * temp = new treeNode(x);

    cout << "Enter the left child of " << x << " : ";
    temp -> left = binaryTree(); // Left Side
    cout << "Enter the right child of " << x << " : ";
    temp -> right = binaryTree(); // Right SIde

    return temp;
}

// Pre Order Traversal
void preOrder(treeNode * Node) {
    if(Node == nullptr) return;

    cout << Node -> data << " ";
    preOrder(Node -> left);
    preOrder(Node -> right);
}

// In Order Traversal
void inOrder(treeNode * Node) {
    if(Node == nullptr) return;

    inOrder(Node -> left);
    cout << Node -> data << " ";
    inOrder(Node -> right);
}

// Post Order Traversal
void postOrder(treeNode * Node) {
    if(Node == nullptr) return;

    postOrder(Node -> left);
    postOrder(Node -> right);
    cout << Node -> data << " ";
}

void levelOrder(treeNode * Node) {
    queue<treeNode *> q;
    q.push(Node);

    while(!q.empty()) {
        treeNode * temp = q.front();
        q.pop();

        cout << temp -> data << " ";

        if(temp -> left) q.push(temp -> left);
        if(temp -> right) q.push(temp -> right);
    }
}

int main() {
    // ? Tree Creation, iterative method
    // queue<treeNode *> q;
    // int x, l, r;

    // cout << "Enter the value of root treenode: ";
    // cin >> x;

    // // empty Tree
    // if(x == -1) return 0;

    // treeNode * root = new treeNode(x);
    // q.push(root);

    // while(!q.empty()) {
    //     treeNode * temp = q.front();
    //     q.pop();

    //     cout << "Enter the left value for " << temp->data << " : ";
    //     cin >> l; // Left Value

    //     if(l != -1) {
    //         temp -> left = new treeNode(l);
    //         q.push(temp -> left);
    //     }

    //     cout << "Enter the right value for " << temp->data << " : ";
    //     cin >> r; // Right Value

    //     if(r != -1) {
    //         temp -> right = new treeNode(r);
    //         q.push(temp -> right);
    //     }
    // }

    // ? Creating Tree Recursively
    cout << "Enter the root treeNode : ";
    treeNode * root = binaryTree();

    // Pre-Order Traversal
    cout << "Pre Order Traversal : ";
    preOrder(root);
    cout << endl;
    
    // In-Order Traversal
    cout << "In Order Traversal : ";
    inOrder(root);
    cout << endl;
    
    // Pre-Order Traversal
    cout << "Pre Order Traversal : ";
    postOrder(root);
    cout << endl;
    
    // Level Order traversal
    cout << "Level Order Traversal : ";
    levelOrder(root);
    cout << endl;
}