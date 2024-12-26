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

/*

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

*/

/*

#include <iostream>
using namespace std;

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        int partitionIndex = i + 1;

        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

int IndexOfElement(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4, 2, 3, 1, 5};
    int target = 3;
    int size = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, size - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int index = IndexOfElement(arr, size, target);

    if (index != -1)
    {
        cout << "Element " << target << " found at index " << index << " after sorting." << endl;
    }
    else
    {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}

*/

/*

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};

void inorder(Node *node)
{
    if (node == nullptr)
    {
        return;
    }
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}
void preorder(Node *node)
{
    if (node == nullptr)
    {
        return;
    }
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

void postorder(Node *node)
{
    if (node == nullptr)
    {
        return;
    }
    postorder(node->left);
    postorder(node->right);
    cout << node->data << " ";
}

int main()
{
    Node *root = new Node(2);
    root->left = new Node(3);
    root->right = new Node(4);
    root->left->left = new Node(5);

    cout << "In-order traversal: ";
    inorder(root);
    cout << endl;
    cout << "Pre-order traversal: ";
    preorder(root);
    cout << endl;
    cout << "Post-order traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}

*/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};

int InternalNodes(Node *node)
{
    if (node == nullptr)
    {
        return 0;
    }

    int count = (node->left != nullptr || node->right != nullptr) ? 1 : 0;

    count += InternalNodes(node->left);
    count += InternalNodes(node->right);

    return count;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Number of internal nodes: " << InternalNodes(root);

    return 0;
}