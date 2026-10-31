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
    string str;
    cin>>str;
    int cnt=1;
    bool istru=false;
    for(int i=1;i<str.length();i++)
    {
        if(str[i]==str[i-1])
        {
            cnt++;

        }
        else
        {
            cnt=1;
        }
        if(cnt==7)
        {
            istru=true;
            break;
        }

    }
    if(istru)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    //cin >> T;
    while (T--)
        solve();

    return 0;
}

