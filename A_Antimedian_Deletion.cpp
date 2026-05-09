#include<bits/stdc++.h>
using namespace std;
void deletion(vector<int> & arr,int k)
{
    if(k<3)
    {
        for(int i=0;i<k;i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    int mx;
    for(int i=0;i<2;i++)
    {
        mx = max(arr[i],arr[i=1]);
    }
    arr.clear(mx);
    
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
       vector <int> arr;
        for(int i=0;i<a;i++)
        {
            int l;
            cin>>l;
            arr.push_back(l);
        }
        deletion(arr,a);
    }
    
}