#include<iostream>
using namespace std;
int main()
{
    int k,n,w;
    int sum=0;
    cin>>k>>n>>w;
    for(int i =1;i<=w;i++)
    {
     sum+=k*i;
    }
    if(sum>n)
    {
          cout<<sum-n<<endl;
    }
    else if(n=sum || n>sum)
    {
        cout<<0<<endl;
    }  
    return 0;

}