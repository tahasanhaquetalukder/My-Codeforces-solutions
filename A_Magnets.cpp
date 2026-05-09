#include<iostream>
using namespace std;
int main()
{
   long long int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            count++;
        }
        else if(n==1)
        {
            cout<<1<<endl;
        }
        
    }
    cout<<count<<endl;
}