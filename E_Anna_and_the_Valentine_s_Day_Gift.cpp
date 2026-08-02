#include <bits/stdc++.h>
using namespace std;
int zero_count(int n)
{
    int m=0;
    while(n%10==0)
    {
        m++;
        n=n/10;
    }
    return m;
}
int digit_count(int n)
{
    int m=0;
    while(n!=0)
    {
        m++;
        n=n/10;
    }
    return m;
}
void solution()
{
    int n,m;
    cin>>n>>m;
    vector< pair<int,int>>par;
    while(n--)
    {
        int k;
        cin>>k;
        int dig=digit_count(k);
        int zero=zero_count(k);
        par.emplace_back(zero,dig);
    }
    sort(par.rbegin(),par.rend());
    for(int i=0;i<par.size();i=i+2)
    {
       par[i].second=par[i].second-par[i].first;
    }
    int cnt=0;
    for(auto it: par)
    {
        cnt+=it.second;
    }
    if(cnt<=m)
    {
        cout<<"Anna"<<endl;
    }
    else
    {
        cout<<"Sasha"<<endl;
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