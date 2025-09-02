#include<iostream>
using namespace std;

class Deque {
    int front, rear, size;
    int * arr;

    public:
    // Constructor to initialize deque of given size
    Deque(int n) {
        front = rear = -1;
        size = n;
        arr = new int[n];
    }

    // Check if deque is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Check if deque is full
    bool isFull() {
        return (front == (rear + 1) % size);
    }

    // Insert element at front
    void push_front(int val) {
        // Deque is full
        if(isFull()) {
            cout << "Deque Overflow!" << endl;
            return;
        }
        
        // Moving front & rear forward in empty Deque
        if(isEmpty()) front = rear = 0;
        // Moving front backward to fill value
        else front = (front - 1 + size) % size;
        
        arr[front] = val;

        cout << "Pushed " << arr[front] << " in the Deque" << endl;
    }

    // Insert element at back
    void push_back(int val) {
        if(isFull()) {
            cout << "Deque Overflow!" << endl;
            return;
        }

        // Moving front & rear forward is empty Deque
        if(isEmpty()) front = rear = 0;
        // Moving rear forward to fill backward
        else rear = (rear + 1) % size;

        arr[rear] = val;

        cout << "Pushed " << arr[rear] << " in the Deque" << endl;
    }

    // Remove element from front
    void pop_front() {
        if(isEmpty()) {
            cout << "Deque Underflow!" << endl;
            return;
        }

        cout << "Popped " << arr[front] << " from the Deque" << endl;
        
        // only one element left
        if(front == rear) front = rear = -1;
        // move front forward
        else front = (front + 1) % size;
    }

    // Remove element from back
    void pop_back() {
        if(isEmpty()) {
            cout << "Deque Underflow!" << endl;
            return;
        }

        cout << "Popped " << arr[rear] << " from the Deque" << endl;

        // only one element left
        if(front == rear) front = rear = -1;
        // move rear backward
        else rear = (rear - 1 + size) % size;
    }

    // Get front element
    int get_front() {
        if(isEmpty()) {
            cout << "Deque is Empty!" << endl;
            return -1;
        }

        return arr[front];
    }

    // Get rear element
    int get_back() {
        if(isEmpty()) {
            cout << "Deque is Empty!" << endl;
            return -1;
        }

        return arr[rear];
    }

    // Display all elements in deque
    void display() {
        if(isEmpty()) {
            cout << "Deque is Empty!" << endl;
            return;
        }

        int i = front;
        do {
            cout << arr[i] << " ";
            i = (i + 1) % size;
        } while (i != (rear + 1) % size);

        cout << endl;
    }
    
    // Destructor to free memory
    ~Deque() {
        delete[] arr;
    }
};

int main() {
    Deque q(6);
    
    q.push_front(7);
    
    q.display();
    
    if(!q.isEmpty()) cout << q.get_front() << endl;
    else cout << endl;
    
    if(!q.isEmpty()) cout << q.get_back() << endl;
    else cout << endl;
    
    q.pop_back();
    
    q.pop_back();
    
    q.display();
}