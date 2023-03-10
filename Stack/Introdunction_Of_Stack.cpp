#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // creation of stack
    stack<int> s;

    // push operation
    s.push(2);
    s.push(3);

    // pop operation
    s.pop();

    cout << "Peek element of an stack is " << s.top() << endl;
    // s.pop();

    if (s.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    cout << "Size of stack is " << s.size() << endl;
    return 0;
}