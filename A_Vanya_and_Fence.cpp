#include<iostream>
using namespace std;
int main()
{
    int n,b;
    cin>>n>>b;
    int arr[n];
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(int i=0;i<n;i++)
    {
      if(arr[i]<=b)
      {
        count=count +1;
      }
      else if(arr[i]>b){
        count = count + 2;
      }
    }
    cout<<count<<endl;
}