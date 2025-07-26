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

// Traversing a linked list
void printList(int arr[], Node * head) {
    Node *temp = head;
    while(temp) {
        cout << temp -> data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// Creating linked list with recursion appending node at end
Node * createLinkedListFromEnd(int arr[], int index, int n) {
    // Base Case
    if(index == n) return NULL;
    
    Node * temp = new Node(arr[index]);
    temp->next = createLinkedListFromEnd(arr, index + 1, n);
    return temp;
}

// Creating linked list with recursion appending node at start
Node * createLinkedListFromStart(int arr[], int index, int n, Node * prev) {
    if(index == n) return prev;

    Node * temp = new Node(arr[index]);
    temp -> next = prev;

    return createLinkedListFromStart(arr, index + 1, n, temp);
}

// Appending at mid of a linked list
void listAddMid(Node * temp, int pos, int val, int index) {
    if(temp -> next == NULL) return;

    if(index == pos - 1) {
        Node * tempNode = new Node(val);

        tempNode -> next = temp -> next;
        temp -> next = tempNode;

        return;
    }

    temp = temp -> next;
    listAddMid(temp, pos, val, index + 1);
}

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
    // printList(arr, head);

    // ? Insert the node at the end
    // int arr[5] = {2, 4, 3, 5, 6};
    
    // // For O(n^2)
    // // Node * head = NULL;
    
    // // For O(n^2)
    // Node * head = NULL, * tail = NULL;
    
    // for(int i = 0; i < 5; i++) {
    //     // If linked list does not exist till now
    //     if(head == NULL) {
        //         head = new Node(arr[i]);

    //         // For O(n)
    //         tail = head;
    //     }

    //     // If linked list exists(O(n^2))
    //     // else {
        //     //     Node * tail = head;
    //     //     while(tail -> next != NULL) {
    //     //         tail = tail -> next;
    //     //     }

    //     //     tail -> next = new Node(arr[i]);
    //     // }
    //     // If linked list exists(O(n))
    //     else {
    //         tail -> next = new Node(arr[i]);
    //         tail = tail -> next;
    //     }
    // }
    
    // // Traversing a linked list
    // printList(arr, head);
    
    // ? Creating a node at end with recursion
    int arr[5] = {2, 4, 3, 5, 6};
    Node * head = createLinkedListFromEnd(arr, 0, 5);
    printList(arr, head);
    
    // ? Insert Node at particular position
    // int x = 3; // <-- Insertion Position
    // int value = 30;
    
    // Node * temp = head;
    // x--;
    
    // while(x--) temp = temp -> next;

    // Node * temp2 = new Node(value);
    // temp2->next = temp->next;
    // temp -> next = temp2;
    
    // printList(arr, head);
    
    // ? Insert Node at particular position with recursion
    int pos = 4; // <-- Value should be 1 <= pos <= Number of Nodes in Linked List - 1
    int val = 7;

    listAddMid(head, pos, val, 0);

    printList(arr, head);

    // ? Creating a node at start with recursion
    // int arr[5] = {2, 4, 3, 5, 6};
    // Node * head = createLinkedListFromStart(arr, 0, 5, NULL);
    // printList(arr, head);
}