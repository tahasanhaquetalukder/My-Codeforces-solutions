#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    map<string, int> mp;
    while (n--)
    {
        string s;
        cin>>s;
        if (mp[s]==0)
            cout<<"OK\n";
        else
            cout <<s<<mp[s]<<endl;
        mp[s]++;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solution();
    return 0;
}