#include<iostream>
#include<queue>
using namespace std;

class Node {
    public:
    int data;
    Node * left, * right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

Node * binaryTree() {
    int x;
    cin >> x;

    if(x == -1) return nullptr;

    Node * temp = new Node(x);

    cout << "Enter the left child of " << x << " : ";
    temp -> left = binaryTree(); // Left Side
    cout << "Enter the right child of " << x << " : ";
    temp -> right = binaryTree(); // Right SIde

    return temp;
}

int main() {
    // ? Tree Creation, iterative method
    // queue<Node *> q;
    // int x, l, r;

    // cout << "Enter the value of root node: ";
    // cin >> x;

    // // empty Tree
    // if(x == -1) return 0;

    // Node * root = new Node(x);
    // q.push(root);

    // while(!q.empty()) {
    //     Node * temp = q.front();
    //     q.pop();

    //     cout << "Enter the left value for " << temp->data << " : ";
    //     cin >> l; // Left Value

    //     if(l != -1) {
    //         temp -> left = new Node(l);
    //         q.push(temp -> left);
    //     }

    //     cout << "Enter the right value for " << temp->data << " : ";
    //     cin >> r; // Right Value

    //     if(r != -1) {
    //         temp -> right = new Node(r);
    //         q.push(temp -> right);
    //     }
    // }

    // ? Creating Tree Recursively
    cout << "Enter the root Node : ";
    Node * root = binaryTree();
}