#include <iostream>
using namespace std;
/*
### Question 1  ###
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num%2==0){
        cout<<"Number is even";
    }
    else{
        cout<<"Number is odd";
    }
return 0;
}
*/

/*

### Question 2  ###
int main()
{
    int num,sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    int temp = num;
    for (int i = 0;temp>0 ; temp/=10)
    {
        sum = sum+temp%10;
    }
    cout<<"Sum of digit is: "<<sum;
    return 0;
}

*/

int main(){
    
    return 0;
}


/*

### Question 4  ###

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