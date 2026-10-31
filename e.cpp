#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int i=0,j=str.length()-1;
    bool flag=false;
    while(i<=j)
    {
        if(str[i]!=str[j])
        {
            flag=true;
        }

    }
    if(flag)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }


}