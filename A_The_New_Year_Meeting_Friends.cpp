#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c && b<a && b<c )
    {
        cout<<c<<endl;
    }
  else   if(a<b && a<c && b>a && b>c )
    {
        cout<<c<<endl;
    }
  else if(b>c && b>a && c<a && c<b )
    {
        cout<<a<<endl;
    }
  else  if(b<c && b<a && c>a && c>b )
    {
        cout<<a<<endl;
    }
    else{
        cout<<b<<endl;
    }
    return 0;
}