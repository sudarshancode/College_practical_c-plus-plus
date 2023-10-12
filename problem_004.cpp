//Write a C++ program to illustrate exception handling concept using stack operation 
//as an example

#include <iostream>
#include <stdexcept>
using namespace std;
const int MAX_SIZE = 5; // Maximum size of the stack

class Stack{
private:
    int items[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    void push(int value) {
        if (top >= MAX_SIZE - 1) {
            throw overflow_error("Stack overflow");
        }
        items[++top] = value;
    }

    int pop() {
        if (top < 0) {
            throw underflow_error("Stack Underflow");
        }
        return items[top--];
    }
};
int main() {
    Stack stack;

    try {
        for (int i = 1; i <= MAX_SIZE + 1; i++) {
            stack.push(i); // Try to push more elements than the stack can hold
            cout << "Pushed: "<<i<<endl;
        }
    } catch (const exception& e){
        cerr << "Exception: " << e.what() << endl;
    }
    try {
        for (int i = 1; i <= MAX_SIZE + 1; i++) {
            int value = stack.pop(); // Try to pop more elements than available
            cout << "Popped: " << value << endl;
        }
    } catch (const exception& e) {
        cerr << "Exception: " << e.what() << endl;
    }

    return 0;
}
