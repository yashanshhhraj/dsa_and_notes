#include<iostream>
using namespace std;

class MinHeap {
    int * arr;
    int size; // Total Elements in Heap
    int total_size; // Total size of Array

    public:
    MinHeap(int n) {
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    // Inserting into the heap
    void insert(int val) {
        // If heap size is unavailable
        if(size == total_size) {
            cout << "Heap Overflow" << endl;
            return;
        }

        arr[size] = val;
        int ind = size++; // Ind stores the index at which element is inserted

        // Comparing Value with Parent Node
        while(ind > 0 && arr[(ind - 1) / 2] > arr[ind]) {
            swap(arr[ind], arr[(ind - 1) / 2]);
            ind = (ind - 1) / 2;
        }

        cout << arr[ind] << " is inserted into heap" << endl; 
    }

    // Heapify
    void Heapify(int ind) {
        int smallest = ind;
        int left = 2 * ind + 1;
        int right = 2 * ind + 2;

        // 'smallest' will store the index of the elemet which is smaller between parent, left child and right child
        if(left < size && arr[left] < arr[smallest])
        smallest = left;
        if(right < size && arr[right] < arr[smallest])
        smallest = right;

        if(smallest != ind) {
            swap(arr[ind], arr[smallest]);
            Heapify(smallest);
        }
    } 

    // Delete Operation
    void Delete() {
        if(size == 0) {
            cout << "Heap Underflow" << endl;
            return;
        }

        cout << arr[0] << " deleted from the Heap" << endl;
        arr[0] = arr[size - 1]; // Replacing heap root with last node
        size--;

        if(size == 0)
        return;

        // Function to keep the heap positions correct
        Heapify(0);
    }

    // Printing Heap Elements
    void Print() {
        for(int i = 0; i < size; i++)
        cout << arr[i] << " ";

        cout << endl;
    }
};

int main() {
    MinHeap H1(10);

    // Inserting
    H1.insert(4);
    H1.insert(14);
    H1.insert(44);
    H1.insert(141);
    H1.Print();
    H1.Delete();
    H1.Print();
    H1.insert(21);
    H1.insert(1);
    H1.insert(1431);
    H1.insert(211);
    H1.insert(43);
    H1.insert(2131);
    H1.Print();
    H1.Delete();
    H1.Delete();
    H1.Delete();
    H1.Delete();
    H1.Delete();
    H1.Delete();
    H1.Delete();
    H1.Delete();

    // Printing elements
    H1.Print();
}