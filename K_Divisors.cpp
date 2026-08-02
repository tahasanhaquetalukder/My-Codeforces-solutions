#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        if(t%i==0)cout<<i<<endl;
    }

    return 0;
}