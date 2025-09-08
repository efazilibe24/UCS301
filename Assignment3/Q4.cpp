#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

bool isRightAssociative(char op) {
    return (op == '^');
}

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Function to convert infix to postfix
string infixToPostfix(string infix) {
    stack<char> st;
    string postfix = "";

    for (char c : infix) {
        if (isspace(c)) 
        {
            continue; // ignore spaces
        }

        if (isalnum(c)) {
            postfix += c;
        }

        // If (, push to stack // 
        else if (c == '(') {
            st.push(c);
        }
        // If ')', pop until '(' // 
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') 
            {
                postfix += st.top();
                st.pop();
            }

            if (!st.empty())
            {
                st.pop(); 
            }

        }
        // If operator // 
        else if (isOperator(c)) {
            while (!st.empty() && isOperator(st.top())) {
                if ((precedence(c) < precedence(st.top())) || (precedence(c) == precedence(st.top()) && !isRightAssociative(c))) 
                {
                    postfix += st.top();
                    st.pop();
                } 
                else 
                {
                    break;
                }
            }
            st.push(c);
        }
    }

    // Pop remaining operators // 
    
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);
    cout << "Postfix Expression: " << postfix << endl;

    return 0;
}
