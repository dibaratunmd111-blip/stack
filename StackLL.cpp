#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top;
public:
    Stack() { top = nullptr; }

    void push(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == nullptr) cout << "Stack is empty!" << endl;
        else {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    int peek() {
        if (top != nullptr) return top->data;
        else return -1;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    cout << "Top element: " << s.peek() << endl;
    s.pop();   cout << "Top element: " << s.peek() << endl;
    s.push(30);
    s.push(40);
    s.push((50));
    s.push(60);
    s.push(70);
    cout << "Top element: " << s.peek() << endl;
}