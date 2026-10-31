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
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(auto &a: arr)
    {
        cin>>a;
    }
    int mx=0;
    int l=0;
    sort(arr.begin(),arr.end());
    for(int i =0;i <n-1; i++)
    {
        if(arr[i+1]-arr[i]>k)
        {
            mx=max(mx,(i+1-l));
            //debug(mx);
            l=i+1;
        }
    }
    mx=max(mx,n-l);
  

    cout<<n-mx<<endl;
    
    
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

