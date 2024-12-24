#include <iostream>
#include <string>
#include <stack>
using namespace std;

/*
#####       Factorial using recursion       #####
int factorial(int fact) {
    if (fact == 0 || fact == 1) {
        return 1;
    }
    return fact * factorial(fact - 1);
}
int main()
{
    int fact;
    cin >> fact;
    int ans = factorial(fact);
    cout << ans;
}

*/

/*
#####       Fibonacci _CrtSetDebugFillThreshold         ######

int main()
{
    int n, first = 0, second = 1, third = 0;
    cin >> n;
    cout<<first<<" "<<second<<" ";
    for (int i = 1; i <= n; i++)
    {
        third = first + second;
        cout << third << " ";
        first = second;
        second = third;
    }
}

*/

/*
#####       Pascal Triangle         #####

void printPascalTriangle(int n)
{
    int currentRow[10];
    for (int i = 0; i < n; i++)
    {
        currentRow[0] = 1;

        cout << currentRow[0] << " ";

        for (int j = 1; j <= i; j++)
        {
            if (j == i)
            {
                currentRow[j] = 1;
            }
            else
            {
                currentRow[j] = currentRow[j - 1] * (i - j + 1) / j;
            }
            cout << currentRow[j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;
    printPascalTriangle(rows);

    return 0;
}

*/

/*
#####       longest Substring Without Repeatition       #####

string longestSubstringWithoutRepeating(const string& s) {
    int lastIndex[256]; // Array to store the last index of each character (assuming ASCII)
    fill(begin(lastIndex), end(lastIndex), -1); // Initialize all indices to -1

    int maxLength = 0; // Length of the longest substring found
    int start = 0; // Start index of the current substring
    string longestSubstring; // To store the longest substring

    for (int end = 0; end < s.length(); end++) {
        char currentChar = s[end];

        // If the character was seen and is within the current substring
        if (lastIndex[currentChar] >= start) {
            // Move the start to the right of the last occurrence of the current character
            start = lastIndex[currentChar] + 1;
        }

        // Update the last index of the current character
        lastIndex[currentChar] = end;

        // Update the maximum length and the longest substring if needed
        if (end - start + 1 > maxLength) {
            maxLength = end - start + 1;
            longestSubstring = s.substr(start, maxLength);
        }
    }

    return longestSubstring;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string result = longestSubstringWithoutRepeating(input);
    cout << "Longest substring without repeating characters: " << result << endl;

    return 0;
}

*/

/*
#####       GCD number          #####

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result = gcd(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}

*/

/*
#####           String to integer           #####
int main() {
    const char* str = "789abc";
    int number = atoi(str);
    cout << "Converted int: " << number << endl;

    return 0;
}

*/

int main()
{
    stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Top element: " << myStack.top() << endl;

    myStack.pop();
    cout << "Top element after pop: " << myStack.top() << endl;

    cout << "Size of stack: " << myStack.size() << endl;
    cout << "Is stack empty? " << (myStack.empty() ? "Yes" : "No") << endl;

    return 0;
}