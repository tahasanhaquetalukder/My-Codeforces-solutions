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
    vi arr(n);
    for(auto &a: arr)
    {
        cin>>a;
    }
    vi cnt;
    int num=1;
    for(int i=1;i<n;i++)
    {
        
        if(arr[i]==arr[i-1])
        {
            num++;
            
        }
        else
        {
            cnt.push_back(num);
            num=1;
        }
    }
    cnt.push_back(num);
    vi ans;
    
    for(int i=1;i<cnt.size();i++)
    {
       int k=min(cnt[i],cnt[i-1]);
       ans.push_back(k);
       

    }
    sort(ans.begin(),ans.end());
    cout<<ans[ans.size()-1]*2<<endl;
    

    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    
    while (T--)
        solve();

    return 0;
}

