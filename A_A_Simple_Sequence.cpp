#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
    }
    for(int i=0;i<n-2;i++)
    {
        while(true)
        {
            if(arr[i+1]%arr[i]>arr[i+2]%arr[i+1])
            {
                break;
            }
            else
            {
                swap(arr[i],arr[i+1]);
                swap(arr[i+1],arr[i+2]);
            }

        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}