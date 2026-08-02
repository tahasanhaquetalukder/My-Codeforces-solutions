#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<long long> ans(n, 0);
    long long max_overall = 0;
    for (int i = 0; i < n; i++) {
        ans[i] = a[i];
        for (int j = 0; j < i; j++) {
            if (i - j > max(a[i], a[j])) {
                ans[i] = max(ans[i], ans[j] + a[i]);
            }
        }
        max_overall = max(max_overall, ans[i]);
    }
    cout << max_overall <<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}