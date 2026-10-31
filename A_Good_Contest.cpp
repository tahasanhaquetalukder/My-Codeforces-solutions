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

#define debug(x) cerr << #x << " = " << x << '\n'

void solve()
{
    int n;
    cin>>n;
    vi arr(3);
    int mn=__INT_MAX__;
    for(auto &a: arr)
    {
        cin>>a;
        mn=min(mn,a);
    }
    cout<<n-mn<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}

