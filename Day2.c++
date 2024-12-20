#include <iostream>
using namespace std;

/*

#####           Creating array      #####
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

*/

/*

#####           Find max in array       #####
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"Max element is: "<<max;
    return 0;
}
*/

/*

#####           Find min in array       #####

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Min element is: "<<min;
    return 0;
}

*/
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    int second_max = INT16_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            second_max = max;
            max = arr[i];
        }
    }
    cout << "Max element is: " << max << endl;
    cout << "Second Max element is: " << second_max;
    return 0;
}