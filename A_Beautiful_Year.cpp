#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (true)
    {
        n++;
        int a,b,c,d;

        a=n%10;
        n=n/10;
        b=n%10;
        n=n/10;
        c=n%10;
        n=n/10;
        d=n%10;
      //  cout<<a<<b<<c<<d<<n<<endl;
        if(a==b||a==c||a==d|| b==c||b==d||c==d)
        {
            n=d*1000+c*100+b*10+a;
           // cout<<n;
            n++;
        }
        else
        {
            n=d*1000+c*100+b*10+a;
            cout<<n<<endl;
            break;
        }
       
    }
    return 0;
    
    
}