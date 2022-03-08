#include <bits/stdc++.h>
using namespace std;
// program to remove duplicates from an array.

void remove_duplicates()
{
    int arr[60], n;
    cout << "enter the no. of elements:: ";
    cin >> n;

    cout << "\nEnter the elements of the array:: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "after removing duplicates:: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                while (j < n)
                {
                    arr[j] = arr[j + 1];
                    j++;
                }
                --n;
            }

            else
            {
                continue;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    remove_duplicates();

    return 0;
}
