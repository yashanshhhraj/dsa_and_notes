#include<iostream>
using namespace std;

class Queue {
    int * arr;
    int front, rear, size;

    public:
    Queue(int n) {
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }

    ~Queue() {
        delete[] arr;
    }

    // Check if queue is empty
    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    // Check if th queue is full
    bool isFull() {
        return ((rear + 1) % size == front);
    }

    // Pushing element 'x' into the queue
    void push(int x) {
        if(isFull()) {
            cout << "Queue Overflow" << endl;
        }

        else if (isEmpty()) {
            front = rear = 0;
            arr[rear] = x;
        }

        else {
            rear = (rear + 1) % size;
            arr[rear] = x;
        }
    }

    // Popping an element from the queue
    void pop() {
        if(isEmpty()) {
            cout << "Queue Underflow" << endl;
            return;
        }

        if(front == rear) front = rear = -1; // Popping the last element makes the queue empty
        else front = (front + 1) % size; // Popping the front element
    }

    // Getting the peek element from the queue
    int peek() {
        if(isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return - 1;
        }

        else return arr[front];
    }

    // Function to print elements of queue
    void display() {
        if(isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }

        cout << "Queue: ";

        int i = front;
        while(true) {
            cout << arr[i] << " ";
            if(i == rear) break;
            i = (i + 1) % size;
        }

        cout << endl;
    }
};

int main() {
    Queue Q(8);
    Q.peek();
    Q.push(9);
    Q.push(4);
    Q.push(8);
    Q.push(91);
    Q.pop();
    Q.pop();
    Q.push(1);
    Q.push(6);
    Q.push(2);
    Q.push(8);
    Q.push(8);
    Q.push(9);
    cout << Q.isEmpty() << endl;
    cout << Q.peek() << endl;
    Q.pop();
    cout << Q.peek() << endl;
    Q.display();
}