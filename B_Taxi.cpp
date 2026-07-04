#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int &a: arr)
    {
        cin>>a;
        sum+=a;
    }
    if(sum%4==0)
    {
        cout<<sum/4<<endl;
    }
    else{
        cout<<(sum/4)+1<<endl;
    }
    return 0;
}