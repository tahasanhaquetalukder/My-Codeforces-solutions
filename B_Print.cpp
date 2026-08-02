#include <bits/stdc++.h>
using namespace std;
void pri(int a)
{
   
    if(a==0)return;
     pri(a-1);
    cout<<a<<" ";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    pri(n);
    return 0;
}