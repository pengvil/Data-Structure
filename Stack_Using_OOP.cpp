#include <bits/stdc++.h>
using namespace std;

class myStack
{
    int Stack[100], top, maxSize;

public:
    myStack(int size = 100)
    {
        maxSize = size;
        top = 0;
    }
    bool isEmpty()
    {
        return (top == 0);
    }
    bool isFull()
    {
        return (top == maxSize);
    }
    bool push(int Element)
    {
        if (!isFull())
        {
            Stack[++top] = Element;
            cout << "Successfully pushed element: " << Element << endl;
            return true;
        }
        else
        {
            cout << "Stack is Full, cant push any more value" << endl;
            return false;
        }
    }
    bool pop()
    {
        if (!isEmpty())
        {
            top--;
            cout << "Successfully popped" << endl;
            return true;
        }
        else
        {
            cout << "Stack is empty, cant use pop" << endl;
            return false;
        }
    }
    int topElement()
    {
        return Stack[top];
    }
    void show()
    {
        if (!isEmpty())
        {
            for (int i = top; i > 0; i--)
            {
                cout << Stack[i] << endl;
            }
        }
    }
};

int main()
{
    myStack st(4);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << "The Stack is printed below: " << endl;
    st.show();
    cout << "Pushing another value after reaching max size" << endl;
    st.push(50);
    cout << endl;

    cout << "top value: " << st.topElement() << endl;
    st.pop();
    cout << "The Stack after popping the top value is printed below: " << endl;
    st.show();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    return 0;
}