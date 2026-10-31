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
     ll n,k;
    cin>>n>>k; 
    string str;
    cin>>str;
    vi arr;
    for(char &a: str)
    {
       arr.push_back(a - '0');
    }
    int cnt=0;
    int test=n/k;
    int j=0;
    
    while(test--)
    {
        //int t=k;
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum=sum+arr[j];
            j++;
        }
        //debug(sum);
        if(sum==k)
        {

            cnt++;
        }
        

    }
    cout<<cnt<<endl;
    
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

