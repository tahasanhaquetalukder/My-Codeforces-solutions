#include <bits/stdc++.h>
using namespace std;
int count_hash(string const &str)
{
      int mx = 0, cnt = 0;
    for (char c : str) {
        if (c == '#') {
            cnt++;
            mx = max(mx, cnt);
        } else {
            cnt = 0;
        }
    }
      return mx;
}
void solution()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int k=count_hash(str);
    if(k%2==0)cout<<k/2<<endl;
    else cout<<(k/2)+1<<endl;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solution();
    }

    return 0;
}