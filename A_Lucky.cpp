#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        
        string n;
        cin>>n;
        int n1=0,n2=0;
        for(int i=0;i<3;i++)
        {
            n1= n1 + (n[i]-'0'); 
        }
        
        int i=5;
        while(i!=2)
        {
            n2= n2 + (n[i]-'0');
            i--;
        }
        
        if(n1==n2)
        {
            cout<<"YES"<<endl;
        }
        else

        {
            cout<<"NO"<<endl;
        }
         t--;

    }
    return 0;
}