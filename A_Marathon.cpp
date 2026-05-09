#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int arr[4];
        for(int i=0;i<4;i++)
        {
            cin>>arr[i];
        }
        int c=0;
        for(int i=1;i<4;i++)
        {
            if(arr[0]<arr[i])
            {
                c++;
            }
        }
        cout<<c<<endl;
        n--;
    }
}