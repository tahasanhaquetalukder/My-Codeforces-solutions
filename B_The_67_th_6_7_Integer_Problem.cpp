#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int m;
    cin>>m;
    while(m!=0)
    {
        int arr[7];
        for(int i=0;i<7;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+7);
        for(int i=0;i<6;i++)
        {
            arr[i]=arr[i]*(-1);
        }
        int sum=0;
        for(int i=0;i<7;i++)
        {
            sum=sum+arr[i];
        }
        cout<<sum<<endl;

        m--;
    }
    return 0;
}