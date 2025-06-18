#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int term=1,diff=1;
    for(int i=0;i<n;i++)
    {
        cout<<term<<" ";
        diff++;
        term+=diff-1;
    }
    return 0;
}