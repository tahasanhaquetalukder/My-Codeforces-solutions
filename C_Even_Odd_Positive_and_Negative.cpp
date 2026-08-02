#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int &a:arr)
    {
        cin>>a;
    }
    int even=0,odd=0,positive=0,negative=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)even++;
        if(arr[i]%2!=0)odd++;
        if(arr[i]>0)positive++;
        if(arr[i]<0)negative++;
    }
    cout<<"Even: " <<even<<"\n"<<"Odd: "<<odd<<"\n"<<"Positive: "<<positive<<endl<<"Negative: "<<negative<<"\n"<<endl;
    return 0;
}