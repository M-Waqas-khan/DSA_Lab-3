#include <iostream>
using namespace std;
int main() 
{
    int matrix[4][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}}; 
    int value;
    cout<<"Enter the value to search: ";
    cin>>value;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] == value) {
                cout<<"Value found at row is: " <<i <<" and column is: " << j <<endl;
                return 0;
            }
        }
    }
    cout<<"Value not found in the matrix." <<endl;
    return 0;
}
