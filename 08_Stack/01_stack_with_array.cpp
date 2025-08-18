#include<iostream>
using namespace std;

class Stack {
    int * arr;
    int size;
    int top;

    public:
    bool flag;

    // Constructor
    Stack(int s) {
        size = s;
        top = -1;
        arr = new int[s];
        flag = 1;
    }

    // Push
    void push (int value) {
        if(top == size - 1) cout << "Stack Overflow!" << endl;

        else {
            top++;
            arr[top] = value;
            cout << value << " Pushed Successfully" << endl;
            flag = 0;
        }
    }

    // Pop
    void pop() {
        if(top == -1) cout << "Stack Underflow!" << endl;

        else {
            top--;
            cout << arr[top + 1] << " Popped Successfully" << endl;

            if(top == -1) flag = -1;
        }
    }

    // Peek
    int peek() {
        if(top == -1) {
            cout << "Stack is Empty" << endl;
            return -1;
        }

        else return arr[top];
    }

    // IsEmpty
    bool IsEmpty() { return top == -1; }

    // IsSize
    int IsSize() { return top + 1; }
};

int main() {
    Stack S(5);

    S.push(5);
    S.push(6);
    S.push(8);
    S.pop();
    S.pop();
    S.push(9);
    S.push(4);
    S.push(1);
    S.pop();
    S.pop();
    S.pop();
    S.push(2);
    S.push(6);

    cout << S.peek() << endl;
    S.pop();
    cout << S.peek() << endl;

    S.pop();
    S.pop();

    S.push(-1);
    cout << "Peek : " << S.peek() << endl;

    S.pop();

    cout << S.IsEmpty() << endl;
    int value = S.peek();

    if(S.flag == 0)
    cout << value << endl;
    
    cout << S.IsSize() << endl;
}