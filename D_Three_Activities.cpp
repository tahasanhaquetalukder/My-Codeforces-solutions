#include <bits/stdc++.h>
using namespace std;
vector<pair<int ,int>> get_top_element(const vector<int> &arr)
{
    int n=arr.size();
    vector<pair<int,int>> values;
    for(int i=0;i<n;i++)
    {
        values.emplace_back(arr[i],i);        
    }
    sort(values.rbegin(),values.rend());
    if(values.size()>3)
    {
        values.resize(3);
    }
    return values;

}
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n),c(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++)cin>>c[i];
    auto top_a=get_top_element(a);
    auto top_b=get_top_element(b); 
    auto top_c=get_top_element(c);
    int ans=0;
    for(auto &x: top_a)
    {
        for(auto &y: top_b)
        {
            if(x.second==y.second) continue;
            for(auto &z: top_c)
            {
                if(x.second==z.second || y.second==z.second)continue;
                ans=max(ans,(x.first+y.first+z.first));
            }

        }
    }
    cout<<ans<<endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}