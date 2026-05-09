#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n),b(n),t(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    t[0]=b[0]-a[0];
    for(int i=1;i<n;i++)
    {
        t[i]=t[i-1]-a[i]+b[i];
    }
    int k=INT_MIN;
    for(int i=0;i<n;i++)
    {
     if(t[i]>k)
     {
        k=t[i];
     }   
    }
    cout<<k<<endl;
    return 0;

}