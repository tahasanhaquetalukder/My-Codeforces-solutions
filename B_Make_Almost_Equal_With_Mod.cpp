#include <bits/stdc++.h>
using namespace std;
int check_element(vector<long long> const & arr, long long element) {
    set<long long> se;
    for(int i = 0; i < arr.size(); i++) {
        long long s = arr[i] % element;
        se.insert(s);
    }
    return se.size();
}

void check(vector<long long> const &arr) {
    for(long long i = 2; ; i = i * 2) {
        int n = check_element(arr, i);
        if(n == 2) {
            cout << i << endl;
            break;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> ve(n);
        for(int i = 0; i < n; i++) cin >> ve[i];
        check(ve);
    }
    return 0;
}