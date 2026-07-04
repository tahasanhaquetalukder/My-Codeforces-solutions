#include<bits/stdc++.h>
using namespace std;
void calc(int arr[],int n)
{
    sort(arr,arr+n);
    int middle=(arr[0]+arr[n-1])/2;
    int cou=0;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        ar[i]=abs(middle-arr[i]);
    }
    sort(ar,ar+n);
    cout<<ar[n-1]<<endl;
}
int main()
{
    int a;
    cin>>a;
    while (a!=0)
    {
        int n;
    cin>>n;
    int arr[n];
    for(int &a: arr)
    {
        cin>>a;

    }
    calc(arr,n);
    a--;

    }
    
    
    return 0;
    
}