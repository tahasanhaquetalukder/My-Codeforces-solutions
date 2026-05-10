#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a!=0){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   int even=0,odd=0;
   for(int i=0;i<n;i++)
   {
    if(arr[i]%2==0)
    {
        even++;
    }
    else 
    {
        odd++;
    }
   }
 int count=0;  
   if(odd>even)
   {
    cout<<"-1"<<endl;
   }
 
   else
   {
    for(int i=0;i<n;i++)
    {
        if(i%2 ==0 & arr[i]%2 !=0 || i%2 !=0 & arr[i]%2 ==0 )
        {
            count++;
        }
    }
    cout<<count/2<<endl;
   }
   a--;
}  
    return 0;
}