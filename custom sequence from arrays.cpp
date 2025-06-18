#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[]={7,5,8,6,9,10,12,14,15,16,18};
    for(int i=0;i<n&&i<11;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}