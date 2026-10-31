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
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        
            arr.push_back(k);
        
    }
    int even=0,odd=0,even1=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%4==0)
        {
            even++;
        }
        else if(arr[i]%2==1)
        {
          even1++;
        }
        else 
        odd++;
    }
    cout<<max({even,odd,even1})<<endl;
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

