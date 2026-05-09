#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
     int sum=0;
    for(int i=1;i<=n;i++)
    {
        int k=1;
       for(int j=1;j<=i;j++)
       {
        k=k*(-1);
       }
       sum=sum+k*i;
    }
    cout<<sum<<endl;
    return 0;
}