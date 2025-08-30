#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;

    // Push
    q.push(10);
    q.push(30);
    q.push(123);

    // Pop
    q.pop();

    // Front Element
    cout << q.front() << endl;

    // Back Element
    cout << q.back() << endl;

    // Size of Queue
    cout << q.size() << endl;

    // If queue is empty
    cout << q.empty() << endl;

    // Printing all the elements of queue
    cout << "Queue : ";
    int n = q.size();

    while(n--) {
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
    cout << endl;

    cout << q.size() << endl;
}