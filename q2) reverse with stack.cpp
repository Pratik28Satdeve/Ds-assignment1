#include <bits/stdc++.h>
#define MAX 50
using namespace std;
class Stack
{
public:
    int top;
    char a[MAX];

    Stack()
    {
        top = -1;
    }

    void push(char val)
    {
        if (top >= (MAX - 1))
        {
            cout << "Stack Overflow";
        }
        else
        {
            ++top;
            a[top] = val;
        }
    }

    char pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
            return '*';
        }
        else
        {
            char x = a[top];
            --top;
            return x;
        }
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
};

int main()
{
    Stack rev;
    string name;
    cout<<"Enter the name to Reverse: ";
    cin>>name;

    int n=name.length();
    for(int i=0; i<n; i++)
    {
        rev.push(name[i]);
    }

    while(rev.isEmpty()==false)
    {
        cout<<rev.pop();
    }
     
    return 0;
}
