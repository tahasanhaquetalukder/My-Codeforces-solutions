#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];

        

    }
    if(sum>0)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
    return 0;
}