#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int n=min(a,b);
    
    if(a>b)
    {
        a=a-b;
        cout<<n<<" "<<a/2;
    }
    else
    {
        b=b-a;
         cout<<n<<" "<<b/2;
        
    }
    return 0;
}