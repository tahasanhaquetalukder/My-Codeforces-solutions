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
    vector<int>arr(n+1,0);
    string str;
    cin>>str;

    stack<int>st;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='1')
        {
            st.push(i+1);
        }
        else if(str[i]=='2')
        {
            if(st.size()!=0)
            {
                st.pop();
            }
           
        }
       
        
    }
    while(st.size()!=0)
    {
        int k=st.top();
        arr[k]=1;
        st.pop();
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==1)
        {
            cnt++;
        }
    }
    if(cnt==0)
    {
        cout<<cnt<<endl<<endl;
        return;
    }
    else
    {
        cout<<cnt<<endl;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]==1)
            {
                cout<<i<<" ";
            }
        }
    }
    cout<<endl;

}

int32_t main(){
    fast
    int t = 1, w = 1;
    cin >> t;
    while(t--){
        solve();
    }
}