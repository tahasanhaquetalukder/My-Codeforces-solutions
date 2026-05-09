#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a;
   cin>>a;
   while(a!=0)
   {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum1=0;
    for(int i=0;i<n;i++)
    {
       sum1=sum1+arr[i];
    }
    if(sum1<3)
    {
        if(sum1==1){

        cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else 
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            arr[i]=k;
            sum=sum+arr[i];
        }
        if(sum%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
      a--;
   }

    return 0;
}