#include <bits/stdc++.h>
using namespace std;

const int maxSize = 4;
int Stack[maxSize], top = 0;

bool isEmpty()
{
    return (top == 0);
    // bool flag = false;
    // if (top == 0)
    //     flag = true;
    // return flag;
}
bool isFull()
{
    return (top == maxSize);
}
bool push(int Element)
{
    if (!isFull())
    {
        Stack[top++] = Element;
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
    return Stack[top-1];
}
void show()
{
    if (!isEmpty())
    {
        for (int i = top-1; i >= 0; i--)
        {
            cout << Stack[i] << endl;
        }
    }
    else{
        cout << "Stack is empty. cant show any more value";
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    cout << "The Stack is printed below: " << endl;
    show();
    cout << "Pushing another value after reaching max size" << endl;
    push(50);
    cout << endl;

    cout << "top value: " << topElement() << endl;
    pop();
    cout << "The Stack after popping the top value is printed below: " << endl;
    show();
    pop();
    pop();
    pop();
    pop();
    show();
    return 0;
}