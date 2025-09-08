#include <iostream>
#include <stack>
#include <cctype>
#include <cmath>
using namespace std;

// Function to apply operator on operands // 
int applyOp(int a, int b, char op) {
    switch (op) 
    {
        case '+': 
            return a + b;
        case '-': 
            return a - b;
        case '*': 
            return a * b;
        case '/': 
            return a / b; 
        case '^': 
            return pow(a, b);
    }

    return 0;
}

int evaluatePostfix(string postfix) {
    stack<int> st;

    for (char c : postfix) {
        if (isspace(c))
        {
            continue;
        }

        if (isdigit(c)) 
        {
            st.push(c - '0'); 
        }

        // If operator, pop two operands
        else 
        {
            int val2 = st.top(); 
            st.pop();
            int val1 = st.top(); 
            st.pop();
            int result = applyOp(val1, val2, c);
            st.push(result);
        }
    }

    return st.top();
}

int main() {
    string postfix;
    cout << "Enter a postfix expression: ";
    cin >> postfix;

    int result = evaluatePostfix(postfix);
    cout << "Result = " << result << endl;

    return 0;
}
