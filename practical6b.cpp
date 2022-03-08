#include<bits/stdc++.h>
using namespace std;
// program to find a number from given numbers using binary search method without recursion.

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;

    int arr[n];
    cout << "enter the elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "enter the number to be found: ";
    cin >> key;

    int s = 0;
    int e = n;
    int mid;

    while(s<=e)
    {
        mid = (s+e)/2;

        if(arr[mid] == key)
        {
           break;
        }
        else if(arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    cout << "\nNumber found at index: " << mid << endl;

    if(s>e)
    {
        cout << "number not found..." << endl;
    }

    return 0;
}