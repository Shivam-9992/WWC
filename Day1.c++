#include <iostream>
using namespace std;
/*
########   CALCULATOR    ##########
int main()
{
    char operation;
    int num1, num2, result;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operation: ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        cout << "Result: " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << "Result: " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << "Result: " << result << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            cout << "Result: " << result << endl;
        }
        break;
    default:
        cout << "Error: Invalid operation." << endl;
        break;
    }

    return 0;
}
*/

/*
######    SUM OF N NUMBERS      ######

int main(){
    int n,sum=0;
    cout<<"Enter number:";
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    cout<<sum;
    return 0;
}

*/

/*

##########          CHECK NUMBER            ##########

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    if (n >100 && n<999){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}

*/

/*

#########           Character count         ########
int main(){
    int n,count=0,temp;
    cin>>n;
    temp = n;
    for (count = 0; temp > 0; count++)
    {
        temp = temp/10;
    }
    cout<<count;
    return 0;
}
*/

/*

#######         Reverse the number          ########

int main(){
    int n,rev=0,mod;
    cin>>n;
    int temp=n;
    for (int i = 0; temp > 0; i++)
    {
        mod = temp % 10;
        rev = rev * 10 + mod;
        temp = temp / 10;
    }
    cout <<rev;
    return 0;
}

*/

/*

#####           Polymorphism            #####
float area(float r)
{
    float pi = 3.14;
    return pi * r * r;
}
float area(float l,float b){
    return l*b;
}

int main()
{
    float radius;
    float l,b;
    cout << "Enter radius: ";
    cin >> radius;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;
    float circle = area(radius);
    cout << circle<<endl;
    float rect = area(l,b);
    cout<<rect;
    return 0;
}

*/

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<number;
    
}