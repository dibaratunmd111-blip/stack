#include <iostream>
using namespace std;
#define MAX 5

class Stack {
    int top;
    int arr[MAX];
public:
    Stack() { top = -1; }

    bool isEmpty() { return top == -1; }
    bool isFull() { return top == MAX - 1; }

    void push(int val) {
        if (isFull()) cout << "Stack Overflow!" << endl;
        else arr[++top] = val;
    }

    void pop() {
        if (isEmpty()) cout << "Stack Underflow!" << endl;
        else top--;
    }

    int peek() {
        if (!isEmpty()) return arr[top];
        else return -1;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    cout << "Top element: " << s.peek() << endl;
    s.pop();
    cout << "Top element: " << s.peek() << endl;
    s.push(30);
    s.push(40);
    s.push((50));
    s.push(60);
    s.push(70);
    cout << "Top element: " << s.peek() << endl;
}
