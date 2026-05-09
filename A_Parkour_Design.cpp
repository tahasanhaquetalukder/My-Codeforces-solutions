#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int x,y;
        cin>>x>>y;
        if(x%2==0 || x % 3 == 0 ||x % 4 == 0 ||x % 5 == 0 ||x % 6 == 0 ||x % 7 == 0 )
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
        n--;

    }
    return 0;
    return 0;
}