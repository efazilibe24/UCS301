#include <iostream>
using namespace std;

#include <string>
#include <stack>

/* Write a program that checks if an expression has balanced parentheses.
*/

bool isBalanced(string expr)
{
    stack<char> s;


    for (char c : expr)
    {
        if (c == '{' || c == '[' || c == '(')
        {
            
            s.push(c);
        }
        else if (c == '}' || c == ']' || c == ')')
        {
            
            if (c == '}' && s.top() != '{')
            {
                
                return false;
            }
            else if (c == ')' && s.top() != '(')
            {
                
                return false;
            }
            else if (c == ']' && s.top() != '[')
            {
                
                return false;
            }


            s.pop();

        }
    }


    if (s.empty() == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}








int main()
{
    string expr = "{ Hello [ () ] }";

    
    if (isBalanced(expr))
    {
        cout << "It is balanced" << endl;
    }
    else
    {
        cout << "It is not balanced" << endl;
    }


    return 0;
}
