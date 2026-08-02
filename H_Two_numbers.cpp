#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,s;
    cin>>a>>s;
    cout<<"floor "<<a<<" / "<<s<<" = "<<floor((double)a/s)<<endl;
    cout<<"ceil "<<a<<" / "<<s<<" = "<<ceil((double)a/s)<<endl;
    cout<<"round "<<a<<" / "<<s<<" = "<<round((double)a/s)<<endl;
    return 0;
}