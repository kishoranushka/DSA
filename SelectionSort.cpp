#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "enter the length of array: ";
    cin >> n;
    int A[n];
    cout << "enter the elements of array: ";
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (A[j] < A[i])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    cout << "sorted array:";
    for (i = 0; i < n; i++)
    {
        cout << A[i];
    }
}