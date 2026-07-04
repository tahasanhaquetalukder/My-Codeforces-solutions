#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n,x;
    cin>>n>>x;
    int arr[n];
    for(int &a:arr )
    {
        cin>>a;
    }
    int arr_ma=0;
    int arr_beg=0;
    int difference=0;
    for(int i = 0; i < n - 1; i++)
{
    difference = max(difference, arr[i + 1] - arr[i]);
}

arr_beg = arr[0];
arr_ma = (x - arr[n - 1]) * 2;

cout << max({difference, arr_beg, arr_ma}) << endl;
    t--;
    }
    
}