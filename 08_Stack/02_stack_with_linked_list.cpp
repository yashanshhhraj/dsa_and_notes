#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node * next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Stack {
    Node * top;
    int size;

    public:
    Stack() {
        top = nullptr;
        size = 0;
    }

    // Push
    void push(int x) {
        Node * temp = new Node(x);
        if(temp == nullptr) {
            cout << "Stack Overflow" << endl;
            return;
        }

        else {
            temp -> next = top;
            top = temp;
            size++;
            cout << "Pushed " << temp -> data << " in Stack" << endl;
        }
    }

    // Pop
    void pop() {
        if(top == nullptr) {
            cout << "Stack Underflow" << endl;
            return;
        }

        else {
            Node * temp = top;
            cout << "Popped " << temp -> data << " from Stack" << endl;
            top = top -> next;
            delete temp;
            size--;
        }
    }

    // Peek
    int peek() {
        if (top == nullptr) {
            cout << "Stack is Empty" << endl;
            return -1;
        }

        else return top -> data;
    }

    // IsEmpty
    bool isEmpty() { return top == nullptr; }

    // IsSize
    int isSize() { return size; }
};

int main() {
    Stack S;
    S.push(6);
    S.push(3);
    S.push(1);
    S.push(3);
    S.push(9);
    S.push(2);
    S.push(1);
    S.push(9);

    cout << S.isSize() << endl;
    
    S.pop();
    S.pop();
    S.pop();
    S.pop();
    S.pop();
    S.pop();
    S.pop();
    S.pop();
    cout << S.isSize() << endl;

    if(!S.isEmpty())
    cout << S.peek() << endl;
    
    cout << S.isEmpty() << endl;
}