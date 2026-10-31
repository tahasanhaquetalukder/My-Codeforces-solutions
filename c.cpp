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
    int n;
    cin>>n;
    string str;
    cin>>str;

    vector<char>ch;
    for(int i=0;i<n;i++)
    {
        ch.push_back(str[i]);
    }
   sort(ch.begin(),ch.end());
   char c=ch[n-1];
   //cout<<c<<endl;
   int cnt=0;
   vector<char>ans;
   for(int i=0;i<n;i++)
   {
       
     if(str[i]==c && cnt==0)
     {
        
        cnt++;
     }
     else
     {
        ans.push_back(str[i]);
     }
      
   }
   for(auto a: ans)
   {
    cout<<a;
   }
   cout<<endl;

}

int32_t main(){
    fast
    int t = 1, w = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}