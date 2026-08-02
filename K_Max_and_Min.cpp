#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,s,d;
    cin>>a>>s>>d;
    cout<<min(a,min(s,d))<<" "<<max(a,max(s,d))<<endl;
    return 0;
}