#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    if (s.find("...") != string::npos)
    {
        cout<<2<<endl;
    }
    
    else
    {
       for(int i=0;i<s.length();i++)
       {
        if(s[i]=='.')
        {
            count++;
        }
       }
       cout<<count<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solution();
    }

    return 0;
}