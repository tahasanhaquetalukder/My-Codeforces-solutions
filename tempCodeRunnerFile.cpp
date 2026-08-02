#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n ;
    cin>>n;
    sort(n.begin(),n.end());
    int sum=0;
    do
    {
        sum=sum+stoi(n);
    } while (next_permutation(n.begin(),n.end()));
    cout<<sum<<endl;

    return 0;
}