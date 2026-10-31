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
string A="312831303130313130313031312831303130313130313031312831303130313130313031";
string B="312931303130313130313031312831303130313130313031312831303130313130313031";
string C="312831303130313130313031312931303130313130313031312831303130313130313031";
string D="312931303130313130313031312831303130313130313031312931303130313130313031";
void solve()
{
    ll n;
    cin>>n;
    string str="";
    for(int i=0;i<n;i++)
    {
         int val;
         cin>>val;
         str+=to_string(val);
    }
    for(int i=0;i+str.size()<A.size();i++)
    {
        if(A.substr(i,str.size())==str)
        {
            cout<<"Yes"<<endl;
            return;
        }
    }
    for(int i=0;i+str.size()<B.size();i++)
    {
        if(B.substr(i,str.size())==str)
        {
            cout<<"Yes"<<endl;
            return;
        }
    }
    for(int i=0;i+str.size()<C.size();i++)
    {
        if(C.substr(i,str.size())==str)
        {
            cout<<"Yes"<<endl;
            return;
        }
    }
     for(int i=0;i+str.size()<D.size();i++)
    {
        if(D.substr(i,str.size())==str)
        {
            cout<<"Yes"<<endl;
            return;
        }
    }

    
    cout<<"No"<<endl;


    
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

