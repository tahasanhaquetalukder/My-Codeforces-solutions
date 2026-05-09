#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n==0)
    {
        cout<<0<<endl;
        return 0;
    }
    long long arr[n];
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<long long >m;
    long long k=arr[0];
    for(long long i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
          m.push_back(i);
        }
    }
    long long  l=m.size();
    cout<<m[l-1]+1<<endl;

    
    return 0;
}