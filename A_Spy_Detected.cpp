#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a;
   cin>>a;
   while(a!=0)
   {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        int freq=0;
       for(int j=0;j<n;j++)
       {
        if(i==j)
        {
            continue;
        }
         if(arr[i]==arr[j])
         {
            freq++;
         }
       }
       if(freq==0)
       {
        cout<<i+1<<endl;
       }
    }
    a--;
   }
    return 0;
}