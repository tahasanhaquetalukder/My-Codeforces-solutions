#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n!=0)
    {
       int t;
       cin>>t;
       int arr[t][t];
       for(int i=0;i<t;i++)
       {
        for(int j=0;j<t;j++)
        {
            cin>>arr[i][j];
        }
        
       }
       int total=0;
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<n-1;j++)
        {
            if(arr[i][j]==arr[i][j+1])
            {
                total++;
            }
        }
       }
       int max=(n*n)-n;
       if(n<=max)
       {
        cout<<"YES"<<endl;

       }
       else{
        cout<<"NO"<<endl;
       }
       n--;
    }
    return 0;

    
}