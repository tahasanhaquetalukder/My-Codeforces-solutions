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
    ll a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    ll aa=a;
    ll bb=b;
    ll k=aa-x;
    ll take=min(k,n);
    ll take2 = min(bb - y, n - take); 
    aa=aa-take;
    bb=bb-take2;
    ll ans= aa*bb;
    aa=a;
    bb=b;
    k=bb-y;
    take=min(k,n);
    take2 = min(aa - x, n - take);
    bb=bb-take;
    aa=aa-take2;
    ll ans2=aa*bb;
    cout<<min(ans,ans2)<<endl;

    

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T ;
    cin >> T;
    while (T--)
        solve();

    return 0;
}

