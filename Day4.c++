#include <iostream>
using namespace std;
int main()
{
    int a[10], i, x, n;
    cout << "Total number of elements : ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (i = 0; i < n; ++i)
        cin >> a[i];

    cout << "\nEnter element to search:";
    cin >> x;

    for (i = 0; i < n; ++i)
        if (a[i] == x)
            break;

    if (i < n)
        cout << "Element " << x << " found at index " << i;
    else
        cout << "Element not found";

    return 0;
}