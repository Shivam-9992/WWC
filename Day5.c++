/*

#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right, int *temp)
{
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= right)
    {
        temp[k++] = arr[j++];
    }

    for (i = left; i <= right; i++)
    {
        arr[i] = temp[i];
    }
}

void mergeSort(int arr[], int left, int right, int *temp)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid, temp);
        mergeSort(arr, mid + 1, right, temp);
        merge(arr, left, mid, right, temp);
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int *temp = new int[n];

    mergeSort(arr, 0, n - 1, temp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] temp;

    return 0;
}

*/

/*

#include <iostream>
using namespace std;

void mergeSortedArrays(int arr1[], int m, int arr2[], int n)
{
    int i = m + n - 1;
    int j = n - 1;
    int k = m - 1;

    while (j >= 0)
    {
        if (k >= 0 && arr1[k] > arr2[j])
        {
            arr1[i--] = arr1[k--];
        }
        else
        {
            arr1[i--] = arr2[j--];
        }
    }
}

int main()
{
    int arr1[10] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8};
    int m = 5;
    int n = 4;

    mergeSortedArrays(arr1, m, arr2, n);

    cout << "Merged array: ";
    for (int i = 0; i < m + n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}

*/

#include <iostream>
#include <algorithm>

using namespace std;

int findElement(int arr[], int size, int targetIndex)
{
    sort(arr, arr + size);
    if (targetIndex >= 0 && targetIndex < size)
    {
        return arr[targetIndex];
    }
    return -1;
}

int main()
{
    int arr[] = {4, 2, 3, 1, 5};
    int targetIndex = 2;
    int size = sizeof(arr) / sizeof(arr[0]);

    int element = findElement(arr, size, targetIndex);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    if (element != -1)
    {
        cout << "Element at index " << targetIndex << " after sorting is: " << element << endl;
    }
    else
    {
        cout << "Target index " << targetIndex << " is out of bounds." << endl;
    }

    return 0;
}