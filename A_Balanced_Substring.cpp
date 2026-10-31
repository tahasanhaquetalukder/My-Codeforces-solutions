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
    string arr;
    cin>>arr;
    int found=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            cout<<i+1<<" "<<i+2<<endl;
            found=1;
            break;
        }
    }
    if(found==0)
    {
        cout<<"-1 -1"<<endl;
    }
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

