#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,l;
    cin>>n>>k>>l;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>> arr[i];

    
    for(int i=0;i<arr.size();i++)
    {
        for(int j=1;arr.size();j++)
        {
            int x=abs(arr[i]-arr[j]);
            if(x==k || x==l)
            {
                swap(arr[i],arr[j]);
            }

        }
    }
    
    if(is_sorted(arr.begin(),arr.end()))
    {
        cout<<"YES"<<endl;

    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}