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
     vector<int> v;
    int check=n/2;
    if(check%2==1)
    {
        cout<<"NO"<<endl;
    }
     
    else
    {   
        int even=0;
        int odd=1;
        cout<<"YES"<<endl;
         int sum=(n/2)*((n/2)+1);
         for(int i=0;i<check;i++)
         {
           
           v.push_back(even+2);
           even=even+2;
         }
         int sum1=0;
         for(int i=0;i<check-1;i++)
         {
           sum1=sum1+odd;
           v.push_back(odd);
           odd=odd+2;
         }
       
         v.push_back(sum-sum1);
        
         for(int i=0;i<v.size();i++)
         {
            cout<<v[i]<<" ";
         }
            cout<<endl;
    }
    a--;
    }
    
}