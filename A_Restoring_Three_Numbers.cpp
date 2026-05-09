#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    for(int i=0;i<4;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    arr.pop_back();
    int c=(arr[2]-arr[0]+arr[1])/2;
    int b=arr[1]-c;
    int a=arr[0]-b;
    cout<<a<<" "<<b<<" "<<c;
}