// program to merge two ordered arrays to get a single ordered array.
#include <bits/stdc++.h>
using namespace std;

void merge_arrays(int arr1[], int arr2[], int n1, int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }

    }

    // storing remaining elements of the arrays      
    while (i < n1)
        {
            arr3[k++] = arr1[k++];
        }

        while (j < n2)
        {
            arr3[k++] = arr2[j++];
        }
}

int main()
{
    int arr1[] = {1, 3, 5, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {4, 6, 9, 14};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[n1 + n2];
    merge_arrays(arr1, arr2, n1, n2, arr3);

    cout << "array after merging:: " << endl;
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}