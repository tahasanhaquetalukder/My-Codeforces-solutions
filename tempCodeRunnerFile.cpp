#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    int total=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[i]>arr[j+1])
            {
                swap(arr[i],arr[j]);
                total++;
            }
        }
    }
   // cout<<total<<endl;
   for(int i=0;i<n;i++)
    {
    cout<<arr[i];
    }
}