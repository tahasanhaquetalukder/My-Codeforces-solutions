#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define endl '\n'

#define debug(x) cerr << #x << " = " << x << '\n'

void solve()
{
    ll n;
    cin>>n;
    vi arr(n);
    for(auto &a:arr)
    {
        cin>>a;
    }
    sort(arr.begin(),arr.end());
    for(auto &a: arr)
    {
        cout<<a<<" ";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


        solve();

    return 0;
}

