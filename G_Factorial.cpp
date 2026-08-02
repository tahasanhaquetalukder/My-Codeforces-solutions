#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin>>n;
        int fact=1;
        while(n>0)
        {
            fact=fact*n;
            n--;
        }
        cout<<fact<<endl;
    }

    return 0;
}