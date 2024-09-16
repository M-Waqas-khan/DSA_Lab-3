#include <iostream>
using namespace std;
int main() 
{
    const int size =6;
    int arr[size];
    cout<<"Enter 6 Integer values: ";
    for (int i=0; i <size; i++) 
    {
        cin >> arr[i];
    }
    bool isPalindrome=true;
    for (int i=0; i<size/2; i++) 
    {
        if (arr[i] != arr[size-1 - i]) 
        {
            isPalindrome=false;
            break;
        }
    }
    if (isPalindrome) 
    {
        cout<<"The array is a palindrome." <<endl;
    } else 
    {
        cout<<"The array is not a palindrome." <<endl;
    }

    return 0;
}
