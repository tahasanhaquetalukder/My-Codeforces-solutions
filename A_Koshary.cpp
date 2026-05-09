#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int a,b;
        cin>>a>>b;
        if(a%2!=0 && b%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        n--;
    }
    return 0;
}