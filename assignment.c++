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

/*

### Question 3  ###
int main()
{
    int num, digit, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    int temp = num;
    for (; temp > 0;)
    {
        digit = temp % 10;
        sum = sum * 10 + digit;
        temp /= 10;
    }
    if (num == sum)
    {
        cout << "Number is Palindrome";
    }
    else
    {
        cout << "Not a Palindrome";
    }

    return 0;
}

*/

/*

### Question 4  ###

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
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
### Question 5  ###
int main(){
    int number,factorial=1;
    cout<<"Enter a number: ";
    cin>>number;
    if (number==0)
    {
        cout<<"Factorial is 1";
    }
    else if (number==1)
    {
        cout<<"Factorial is 1";
    }
    else if (number>1)
    {
        for (int i = 2; i <= number; i++)
        {
            factorial *= i;
        }
        cout<<"Factorial of "<<number<<" is "<<factorial;
    }
    else{
        cout<<"Enter a valid number.";
    }
    
    return 0;
}
*/