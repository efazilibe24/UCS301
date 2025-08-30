#include <iostream>

using namespace std;

/*
1. Develop a menu driven program demonstrating the following operations on a Stack using array:
(i) push(), (ii) pop(), (iii) isEmpty(), (iv) isFull(), (v) display(), and (vi) peek().
*/

class Stack
{
    private:
        int arr[5];
        int max_size = 5;
        int top;
    public:
            // Constructor // 
        Stack()
        {
            top = -1;
        }

        bool isEmpty()
        {
            if (top == -1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }


        bool isFull()
        {
            if (top == max_size - 1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }


        void display()
        {
            for (int i = 0; i <= top; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }


        void push(int element)
        {
            if (isFull() == false)
            {
                top++;
                cout << "Adding element at pos : " << top << endl;
                arr[top] = element;
            }
            else
            {
                cout << "Cannot add element, stack is full." << endl;
            }
        }

        void pop()
        {
            if (isEmpty() == false)
            {
                cout << "Element : " << arr[top] << " popped from stack!" << endl;
                top--;
            }
            else
            {
                cout << "Cannot remove element, stack is empty!" << endl;
            }
        }

        void peek() // Checks top element //
        {
            if (isEmpty() == false)
            {
                cout << "Top element : " << arr[top] << endl;
            }
            else
            {
                cout << "No top element, stack is empty!" << endl;
            }
        }
};

bool running = true;
int main()
{
    Stack s;
    int choice, value;

    while (running) {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. isEmpty\n";
        cout << "4. isFull\n";
        cout << "5. Display\n";
        cout << "6. Peek\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            cout << (s.isEmpty() ? "Stack is empty.\n" : "Stack is not empty.\n");
            break;
        case 4:
            cout << (s.isFull() ? "Stack is full.\n" : "Stack is not full.\n");
            break;
        case 5:
            s.display();
            break;
        case 6:
            s.peek();
            break;
        case 7:
            cout << "Exiting...\n";
            running = false;
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }

    }
    return 0;
}