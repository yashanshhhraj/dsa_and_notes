class Node {
    public:
    Node * prev;
    int data;
    Node * next;

    Node(int x) {
        prev = nullptr;
        data = x;
        next = nullptr;
    }
};

class MyCircularDeque {
    Node * front, * rear;
    int size, nodeCount;

public:
    MyCircularDeque(int k) {
        size = k;
        nodeCount = 0;
        front = rear = nullptr;
    }
    
    bool insertFront(int value) {
        if(isFull()) return false;

        Node * temp = new Node(value);

        if(isEmpty()) {
            // Front & Rear will point to same node if it is the first node
            front = rear = temp;
        }

        else {
            // Connecting the Nodes
            front -> prev = temp;
            temp -> next = front;

            // Moving front to newly attached node
            front = front -> prev;
        }

        nodeCount++; // Added one node
        return true; // Addition Sucessfull
    }
    
    bool insertLast(int value) {
        if(isFull()) return false;

        Node * temp = new Node(value);

        if(isEmpty()) {
            // Front & Rear will point to same node if it is the first node
            front = rear = temp;
        }

        else {
            // Connecting the Nodes
            rear -> next = temp;
            temp -> prev = rear;

            // Moving rear to newly attached node
            rear = rear -> next;
        }

        nodeCount++; // Added one node
        return true; // Addition Successfull
    }
    
    bool deleteFront() {
        // If the deque is empty, deletion is not possible
        if(isEmpty()) return false;

        Node * temp = front; // Node to be deleted
        front = front -> next; // Moving front to next node

        if(!front)
        rear = front; // If front does not exists, rear wouldn't
        else
        front -> prev = nullptr; // Node deleted

        delete temp; // Deleting temp
        nodeCount--; // Deleted one node
        return true; // Deletion Successfull
    }
    
    bool deleteLast() {
        // If the deque is empty, deletion is not possible
        if(isEmpty()) return false;

        Node * temp = rear; // Node to be deleted
        rear = rear -> prev; // Moving rear to previous pointer

        if(!rear)
        front = rear; // If the rear does not exists, front wouldn't
        else
        rear -> next = nullptr; // Node deleted

        delete temp; // Deleting Node
        nodeCount--; // Deleted one node
        return true; // Deletion Successfull
    }
    
    int getFront() {
        if(isEmpty()) return -1;

        return front -> data;
    }
    
    int getRear() {
        if(isEmpty()) return -1;

        return rear -> data;
    }
    
    bool isEmpty() {
        return (!front && !rear);
    }
    
    bool isFull() {
        return (nodeCount == size);
    }
};