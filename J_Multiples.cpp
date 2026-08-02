#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,s;
    cin>>a>>s;
    if(a%s == 0 || s%a==0)
    {
        cout<<"Multiples"<<endl;
    }
    else{
        cout<<"No Multiples"<<endl;
    }
    return 0;
}