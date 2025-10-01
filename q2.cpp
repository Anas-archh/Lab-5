#include <iostream>
#include <cstring>
#include <cmath>
#include <utility>


using namespace std;

class MyStack
{
    private:
        int capacity;
        int* stack;
        int top;

    public:
        MyStack(int size) {
            capacity = size;
            stack = new int[capacity];
            top = -1;
            cout << "Constructor Called with capacity: " << capacity << endl; 

        }
        ~MyStack() {
            delete[] stack;
            cout << "Destructor Called: Stack memory freed." << endl;
        }

        void push(int element) {
            // string element;
            top ++;
            // cout << "Enter element: " << endl;
            // cin >> element;
            stack[top] = element; // or we can also use stack[++top] = element
        }
        int pop() {
            return stack[top--];
        }
        int topp() {
            cout << stack[top] << endl;
            return 0;
        }

        bool isempty() {
            if (top == -1) {
                return true;
            }
            else {
                return false;
            }
        }

};

int main() {
    MyStack c1(4);
    c1.push(1);
    c1.push(2);
    c1.push(3);
    c1.push(4);
    c1.pop();
    c1.pop();
    c1.push(10);
    c1.topp();


    while (!c1.isempty()) {
        cout << c1.pop() << endl;
    }
    // int r = 0;
    // while (true) {
    //     cout << c1[r];
    //     r++;
    }
