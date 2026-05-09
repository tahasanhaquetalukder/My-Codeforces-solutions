#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    char ch[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
    }
    while (t!=0)
    {
        int i=0;
        while(i<n)
        {
          if(ch[i]=='B'&&ch[i+1]=='G')
          {
            swap(ch[i],ch[i+1]);
            i=i+2;
          }
          else 
          {
            i++;
          }
        }
        t--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<ch[i];
    }
    
    
}