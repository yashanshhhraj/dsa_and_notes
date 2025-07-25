#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node * next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {
    // Node A1(4);
    // cout << A1.data << " " << A1.next << endl;

    // Dynamic Creation
    // Node *Head = new Node(4);

    // cout << Head -> data << endl;
    // cout << Head -> next << endl;

    // ? Insert the node at the begining
    // int arr[5] = {2, 4, 3, 5, 6};

    // Node * head = NULL;
    // for(int i = 0; i < 5; i++) {
    //     // If linked list does not exist till now
    //     if(head == NULL)
    //     head = new Node(arr[i]);

    //     // If linked list exists
    //     else {
    //         Node * temp = new Node(arr[i]);
    //         temp -> next = head;
    //         head = temp;
    //     }
    // }

    // // Traversing a linked list
    // Node *temp = head;
    // while(temp) {
    //     cout << temp -> data << " ";
    //     temp = temp->next;
    // }

    // ? Insert the node at the end
    int arr[5] = {2, 4, 3, 5, 6};

    // For O(n^2)
    // Node * head = NULL;

    // For O(n^2)
    Node * head = NULL, * tail = NULL;

    for(int i = 0; i < 5; i++) {
        // If linked list does not exist till now
        if(head == NULL) {
            head = new Node(arr[i]);

            // For O(n)
            tail = head;
        }

        // If linked list exists(O(n^2))
        // else {
        //     Node * tail = head;
        //     while(tail -> next != NULL) {
        //         tail = tail -> next;
        //     }

        //     tail -> next = new Node(arr[i]);
        // }
        // If linked list exists(O(n))
        else {
            tail -> next = new Node(arr[i]);
            tail = tail -> next;
        }
    }

    // Traversing a linked list
    Node *temp = head;
    while(temp) {
        cout << temp -> data << " ";
        temp = temp->next;
    }
}