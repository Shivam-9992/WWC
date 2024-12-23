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

/*

#####         Second max element of array         #####

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

*/


/*
#####           Linked list reverse         #####
struct Node {
    int data;
    Node* next;
};

Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
}

int main() {
    Node* head = new Node{10, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{15, nullptr};
    head->next->next->next = new Node{100, nullptr};

    cout << "Original List: ";
    printList(head);

    head = reverseLinkedList(head);

    cout << "\nReversed List: ";
    printList(head);

    return 0;
}
*/

