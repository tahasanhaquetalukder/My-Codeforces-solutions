#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr.begin(),arr.end());
    int ps[arr.size()];
    ps[0]=arr[0];
    for(int i=1;i<arr.size();i++)
    {
        ps[i]=ps[i-1]+arr[i];
    }
    int cnt=0;
    for(auto &p:ps)
    {
        if(p<=m)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

    
}