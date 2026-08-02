#include <bits/stdc++.h>
using namespace std;
bool ans(vector<int> arr, int a, int b)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            int x = abs(arr[i] - arr[j]);
            if (x == a || x == b)
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    if (is_sorted(arr.begin(), arr.end()))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solution()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (ans(a, x, y) == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}