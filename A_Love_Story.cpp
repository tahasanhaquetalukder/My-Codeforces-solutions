#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t!=0)
   {
     string s="codeforces";
    int c=0;
    string st;
    cin>>st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=st[i])
        {
            c++;
        }

    }
    cout<<c<<endl;
    t--;
   }
    return 0;
}