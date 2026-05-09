#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> t6;
    vector<int> t2; 
    vector<int> t3; 
    vector<int> t1; 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 6 == 0) {
            t6.push_back(x);   // both 2 and 3
        }
        else if (x % 2 == 0) {
            t2.push_back(x);   // only 2
        }
        else if (x % 3 == 0) {
            t3.push_back(x);   // only 3
        }
        else {
            t1.push_back(x);   // none
        }
    }
    for (int i = 0; i < t6.size(); i++) {
        cout << t6[i] << " ";
    }
    for (int i = 0; i < t2.size(); i++) {
        cout << t2[i] << " ";
    }
    for (int i = 0; i < t1.size(); i++) {
        cout << t1[i] << " ";
    }
    for (int i = 0; i < t3.size(); i++) {
        cout << t3[i] << " ";
    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}