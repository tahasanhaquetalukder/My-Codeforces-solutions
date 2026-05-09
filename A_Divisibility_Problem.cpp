#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test!=0)
    {
        int a,b;
        cin>>a>>b;
        int cou=0;

        for(;a%b!=0;)
        {
            a++;
            cou++;
        }
        cout<<cou<<endl;
        test--;
    }
    return 0;
}