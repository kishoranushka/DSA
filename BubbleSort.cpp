#include <iostream>
using namespace std;
int main()
{
    int n, i, counter = 1;
    cout << "enter the length of array: ";
    cin >> n;
    int A[n];
    cout << "enter the elements of array: ";
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    while (counter < n)
    {
        for (i = 0; i < n - counter; i++)
        {
            if (A[i] > A[i + 1])
            {
                int temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
            }
        }
        counter++;
    }
    for (i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}