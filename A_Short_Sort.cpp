#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        string s;
        cin>>s;
        if(s=="cab" || s=="bca")
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