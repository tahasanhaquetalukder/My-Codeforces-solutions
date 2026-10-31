#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'
#define ff first
#define ss second
#define pb push_back
#define int long long
#define ld long double
#define HA cout<<"Yes"<<nl
#define NA cout<<"No"<<nl
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define spre(x) fixed<<setprecision(x)
#define debug(x) cerr << #x << " = " << x << '\n'
using namespace std;
using namespace __gnu_pbds;

const ld pi = acosl(-1.0L);
const int MOD = 1e8+7;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void solve(){
     int n;
     cin>>n;
     vector<int> arr(n);
     int max1=0,max2=0;
     int a=0,b=0;
     for(int i =0;i<n;i++)
     {
        int k;
        cin>>k;
        a+=k;
        max1=max(a,max1);
        
     }
     int m;
     cin>>m;
     for(int i =0;i<m;i++)
     {
        int k;
        cin>>k;
        b+=k;
        max2=max(b,max2);
     }
     cout<<max1+max2<<endl;


}

int32_t main(){
    fast
    int t = 1, w = 1;
    cin >> t;
    while(t--){
        solve();
    }
}