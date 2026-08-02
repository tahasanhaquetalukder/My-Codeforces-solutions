#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int k=1378%10;
    int n=pow(k,t);
    cout<<n%10<<endl;

    return 0;
}