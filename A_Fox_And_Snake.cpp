#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  int count=0;
  for(int i=0;i<a;i++)
{
    if((i+1)%2 !=0)
    {
        for(int i=0;i<b;i++)
        {
            cout<<"#";
        }
    }
    else
    {
        count++;
        if(count %2!=0)
        {
            for(int i=0;i<b-1;i++)
        {
            cout<<".";
        }
        cout<<"#";
        }
        else
        {
            cout<<"#";
            for(int i=1;i<b;i++)
        {
            cout<<".";
        }
        }
    }
    cout<<endl;
}
}