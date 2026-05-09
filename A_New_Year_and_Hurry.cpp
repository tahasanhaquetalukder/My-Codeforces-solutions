#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int count=0;
    for(int i=1;i<=a;i++)
    {
        b=b+i*5;
        if(b<=240)
        {
            count++;
        }
    }
    cout<<count<<endl;
}