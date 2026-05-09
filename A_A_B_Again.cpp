#include<bits/stdc++.h>
using namespace std;
void sum(int n)
{
    int rem=0,sum=0;
    while(n !=0)
    {
        rem=n%10;
        sum=rem+sum;
        n=n/10;
    }
    cout<<sum+n<<endl;
}
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int a;
        cin>>a;
        sum(a);
        n--;
    }
    
}