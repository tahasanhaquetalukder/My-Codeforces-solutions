#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int a=0 ,b=0;
        int k;
        string s;
        cin>>k>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                a++;
            }
            else if(s[i]==')')
            {
                b++;
            }
        }
        if(a==b)
        {
            cout<<"YES"<<endl;

        }
        else
        {
            cout<<"NO"<<endl;
        }
        n--;
    }
    return 0;
}