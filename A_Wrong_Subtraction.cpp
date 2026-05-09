#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    while (m!=0)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        else{
            n--;
        }
        m--;
    }
    cout<<n<<endl;
    return 0;
    
}