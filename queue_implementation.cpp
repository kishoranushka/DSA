#include <iostream>
using namespace std;
int queue[5], i, j, front = 0, rear = 0, n;

void Enqueue()
{
    if (rear == 5)
    {
        cout << "The queue is full.\n";
    }
    else
    {
        cout << "Enter the value to be inserted: ";
        cin >> n;
        queue[rear] = n;
        cout << " \n";
        rear++;
    }
}
void Dequeue()
{
    if (rear == 0 || front == rear)
    {
        cout << "The queue is empty.";
    }
    else
    {
        cout << "The dequeued element is: " << queue[front];
        front++;
    }
}
void Display()
{
    if (rear == 0 || front == rear)
    {
        cout << "The queue is empty.";
    }
    else if (rear == 5)
    {
        cout << "The queue is full.\n";

        for (i = front; i < rear; i++)
        {
            if (front == rear)
            {
                cout << "The queue is empty.";
            }
            else
            {
                cout << queue[i];
                cout << " ";
            }
        }
    }
    else
    {
        for (i = front; i < rear; i++)
        {
            if (front == rear)
            {
                cout << "The queue is empty.";
            }
            else
            {
                cout << queue[i];
                cout << " ";
            }
        }
    }
}

int main()
{
    int choice;
table:
    cout << "\n1)Enqueue 2)Dequeue 3)Display 4)exit\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        Enqueue();
        goto table;

    case 2:
        Dequeue();
        goto table;

    case 3:
        Display();
        goto table;

    case 4:
        break;

    default:
        cout << "Enter a valid choice: ";
        goto table;
    }
}
