#include<iostream>
using namespace std;

// Doubly Linked List Structure
class Node {
    public:
    int data;
    Node * next;
    Node * prev;

    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

// Printing the Doubly Linked List
void printList(Node * head) {
    // If the list is empty, print a message and return
    if(head == nullptr) cout << "Head is null" << endl;

    else {
        Node * temp = head; // Start from the head of the list

        while(temp) {
            cout << temp->data << " "; // Print the data of current node
            temp = temp->next; // Move to the next node
        }

        cout << endl; // Print newline after the list is printed
    }
}

// Creating Doubly Linked List form array iteratively
Node * createLinkedList(const int arr[], Node * head, const int n) {
    // Pointer to the tail (last node) to build list efficiently
    Node * tail = head;

    for(int i = 0; i < n; i++) {
        // If the list is empty, initialize both head and tail with the new node
        if(head == nullptr) {
            head = new Node(arr[i]);
            tail = head;
        }

        else {
            // Create the new node & link the new node at the end of the list
            tail -> next = new Node(arr[i]); // Tail's next points to new node
            tail -> next -> prev = tail; // New node's prev points to current tail
            tail = tail -> next; // Move tail to the new last node
        }
    }

    // Return the head of the doubly linked list
    return head;
}

// Creating Doubly Linked List form array recursively
Node * createRecLinkedList(const int arr[], const int n, int i, Node * prev) {
    // Base case: if index reaches the end of the array, return nullptr
    if(i == n) return nullptr;

    // Create a new node with current array element
    Node * temp = new Node(arr[i]);

    // Link the current node with its previous node
    temp -> prev = prev;

    // Recursively create the rest of the list and set the next pointer
    temp -> next = createRecLinkedList(arr, n, i + 1, temp);

    // Return the current node (acts as the head in the first call)
    return temp;
}

int main() {
    Node * head = nullptr;

    // ? Inserting Node at Beginning
    // If list is empty, create new node as head
    // if(head == nullptr) head = new Node(5);
    // else {
    //     // Create and link the new node at the beginning
    //     head -> prev = new Node(5);
    //     head -> prev -> next = head;
        
    //     // Update head to new node
    //     head = head -> prev;
    // }

    // printList(head);

    // ? Insertion at end
    // If list is empty, create new node as head
    // if(head == nullptr) head = new Node(6);
    // else {
    //     Node * curr = head;

    //     // Traverse to the last node
    //     while(curr -> next != nullptr) curr = curr -> next;

    //     // Create and link the new node at the end
    //     curr -> next = new Node(6);
    //     curr -> next -> prev = curr;
    // }

    // printList(head);

    // Linked List from array
    int arr[] = {2, 3, 4, 6, 1, 6, 8, 5, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]); // <-- Size of array

    // Creating Linked List Iteratively
    // head = createLinkedList(arr, head, n);

    // Creating Linked List Recursively
    head = createRecLinkedList(arr, n, 0, nullptr);
    printList(head);
}