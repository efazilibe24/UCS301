#include <iostream>

#include <string>
#include <stack>
using namespace std;

/*
2. Given a string, reverse it using STACK. For example “DataStructure” should be output as
“erutcurtSataD.”
*/

int main()
{

    string s = "";

    cout << "Please enter your string : ";
    cin >> s;


    stack<char> stk;

    for (int i = 0; i < s.size(); i++)
    {
        stk.push(s[i]);
    }


    s = "";

    while (stk.empty() == false)
    {
        s += stk.top(); 
        stk.pop();

    }


    cout << s << endl;




    return 0;
}