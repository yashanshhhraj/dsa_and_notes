#include <iostream>
using namespace std;

// Node structure for the queue
class Node {
    public:
    int data; // stores the data
    Node * next; // pointer to the next node

    // Constructor to initialize a new node
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

// Queue implementation using a linked list
class Queue {
    Node * front, * rear; // pointers to track front and rear of the queue

    public:
    // Constructor: Initializes an empty queue
    Queue() {
        front = rear = nullptr;
    }

    // Destructor : To release occupied memeory
    ~Queue() {
        while(!isEmpty()) pop();
    }

    // Check if the queue is empty
    bool isEmpty() {
        return (!front); // true if front == nullptr
    }

    // Insert (enqueue) an element into the queue
    void push(int x) {
        Node * temp;
        try {
            temp = new Node(x); // create a new node
        }

        catch(const bad_alloc& e) {
            // If head memory gets filled, no memory allocated to temp;
            cout << "Memory Allocation Failed: " << e.what() << endl;
            return;
        }
        
        // If queue is empty, both front and rear point to the new node
        if(isEmpty()) {
            front = rear = temp;
        }

        // Otherwise, link new node at the end and move rear
        else {
            rear -> next = temp;
            rear = rear -> next;
        } 
    }

    // Remove (dequeue) an element from the queue
    void pop() {
        if(isEmpty()) {
            cout << "Queue Underflow!" << endl; // Cannot remove from empty queue
            return;
        }

        Node * temp = front; // store front node
        front = front -> next; // move front to the next node
        if(!front) rear = nullptr; // if queue becomes empty, set rear = nullptr
        delete temp; // free memory of removed node
    }

    // Get the front element of the queue without removing it
    int peek() {
        if(isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return -1; // return -1 if queue is empty
        }

        return front -> data; // return data at front
    }

    // Display all elements of the queue
    void display() {
        Node * temp = front;

        while(temp) {
            cout << temp -> data << " ";
            temp = temp -> next;
        }

        cout << endl;
    }
};

int main() {
    Queue Q;

    Q.push(6);
    Q.push(8);
    Q.push(2);
    Q.push(9);
    Q.push(1);
    Q.push(7);
    cout << Q.peek() << endl;
    Q.pop();
    Q.pop();
    Q.pop();
    Q.push(8);
    Q.push(2);
    Q.push(9);
    Q.push(1);
    Q.display();
}