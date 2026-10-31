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

using namespace std;
using namespace __gnu_pbds;

const ld pi = acosl(-1.0L);
const int MOD = 1e8+7;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void solve(){
   string str;
    cin>>str;

    int i=0,j=str.length()-1;
    bool flag=false;
    while(i<=j)
    {
        if(str[i]!=str[j])
        {
            flag=true;
        }
        else if(str[i]!='A' && str[i]!='H' && str[i]!='I' && str[i]!='M' && str[i]!='S' && str[i]!='O' && 
        str[i]!='T' && str[i]!='U' && str[i]!='X' && str[i]!='Y'  && str[i]!='W' )
        {
            flag=true;
        }
        i++;
        j--;
    }
    if(flag)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }


}

int32_t main(){
    fast
    int t = 1, w = 1;
   // cin >> t;
    while(t--){
        solve();
    }
}