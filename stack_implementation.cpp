// Push, Pop , Display, Exit operation on Stack

#include <iostream>
using namespace std;
int stack[5], i, j, top = -1;
void push()
{
    int n;

    if (top == 4)
    {
        cout << "Stack is full.\n\nThe elements are: ";
    }
    else
    {
        cout << "enter the value to be inserted in the stack: ";
        cin >> n;
        top++;
        stack[top] = n;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "\n The stack is empty.\n";
    }
    else
    {
        cout << "\nthe popped element is : " << stack[top];
        //  stack[top] = NULL;
        top--;
        cout << "\n";
    }
}
void display_stack()
{
    cout << "Stack: \n";
    if (top == -1)
    {
        cout << "The stack is empty.\n\n";
    }
    else if (top == 4)
    {
        cout << "The stack is full.\n\n";
        for (i = 0; i <= top; i++)
        {
            cout << stack[i] << "\n";
        }
    }
    else
    {

        for (i = 0; i <= top; i++)
        {
            cout << stack[i] << "\n";
        }
    }
}

int main()
{
    int choice;
table:
    cout << "1)push ()2)pop() 3)display_stack() 4)exit \n";

    cin >> choice;
    switch (choice)
    {
    case 1:
        push();
        goto table;

    case 2:
        pop();
        goto table;
    case 3:
        display_stack();
        goto table;
    case 4:
        break;
    default:
        cout << "enter a valid choice.";
        goto table;
    }
}