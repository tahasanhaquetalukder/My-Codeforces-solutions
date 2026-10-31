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
    cin >> n;
    vi arr(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sum = sum / 2;
    sort(all(arr));

    int temp = 0, count = 0;
    int j = n;
    while (temp <= sum && j > 0)
    {
        temp += arr[j - 1];
        count++;
        j--;
    }

    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}