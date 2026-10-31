#include <bits/stdc++.h>
using namespace std;
void solution ()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int one=0,two=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    int sum=one+2*two;
    if(sum%2!=0)
    {
        cout<<"NO"<<endl;
    }
    else if(one==0 && two%2!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
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
//suuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu