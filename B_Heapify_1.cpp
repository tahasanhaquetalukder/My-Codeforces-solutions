#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int a;
        cin>>a;
        int arr[a];
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<a/2;i++)
        {
            for(int j=a-1;j>=0;j--)
            {
                if(i<j)
                {
                    swap(arr[i],arr[j]);
                }
            }
        }
        bool k;
        for(int i=0;i<a;i++)
        {
            if(arr[i]<arr[i+1])
            {
                cout<<"NO"<<endl;
                break;
            }
            else
            {
                k=true;
            }

        }
        if(k==true)
        {
            cout<<"YES"<<endl;
        }
        n--;
    }
    return 0;
}