#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define int long long
#define ld long double
#define HA cout<<"YES"<<endl
#define NA cout<<"NO"<<endl
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define spre(x) fixed<<setprecision(x)
 
using namespace std;
using namespace __gnu_pbds;
 
const ld pi = acosl(-1.0L);
const int MOD = 1e8+7;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void knight() {
  int n;
  cin>>n;

  vector<int>arr(n);
  int cnt=0;

  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    cnt+=arr[i];
  }


    

}
int32_t main()
{
  
  int t=1;
  cin>>t;
 
  while(t--)
  {
    knight();
  }
}