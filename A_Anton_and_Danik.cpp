#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch[n];
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
    }
    int an=0,dan=0;
    for(int i=0;i<n;i++)
    {
        if(ch[i]=='A')
        {
            an++;
        }
        else
        {
            dan++;
        }
    }
    if(an>dan)
    {
        cout<<"Anton"<<endl;
    }
    else if(an==dan){
        cout<<"Friendship"<<endl;
    }
    else{
        cout<<"Danik"<<endl;
    }
    return 0;
}