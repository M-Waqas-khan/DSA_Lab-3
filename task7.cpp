#include <iostream>
using namespace std;
int main() 
{
    int size, key;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < size; i++) 
    {
        cin>>arr[i];
    }
    cout<<"Enter the key value to search: ";
    cin>>key;
    bool found = false;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == key) 
        {
            cout<<"Key value found at index: " <<i <<endl;
            found = true;
            break;
        }
    }
    if (!found) 
    {
        cout<<"Key value not found in the array." <<endl;
    }
    return 0;
}
