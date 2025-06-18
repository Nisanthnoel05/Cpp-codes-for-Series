#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int start=11;
    for(int i=0;i<n;i++)
    {
        cout<<start*start<<" ";
        start+=4;
    }
    return 0;
}