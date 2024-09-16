#include <iostream>
using namespace std;
int main()
{
    int array[]={10,15,19,18,99};
    array[2]=35;
     for(int i=0; i<6; i++)
     {
        cout<<array[i]<<"  ";
     }
    return 0;
}
