#include <iostream>
using namespace std;
int main()
{
    int num[]={10,16,18,19,44,54};
    num[4]=num[5];
    num[5]=num[6];
    for(int i=0; (i+1)<6; i++)
    {
        cout<<num[i]<<"  ";
    }
    return 0;
}