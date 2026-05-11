#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    int k; 
    cin>>k;
    for(int i=0;i<k;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    int co=0;
    int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        if(arr[n-1]-arr[i]>0)
        {
            co=co+(arr[n-1]-arr[i]);
        }
    }
    cout<<co<<endl;
    return 0;
}