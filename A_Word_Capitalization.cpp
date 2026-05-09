#include<iostream> 
#include<string>
using namespace std;
int main()
{
    string n;
    cin>>n;
    if(n[0]>='a' && n[0]<='z')
    {
        n[0]=n[0]-32;
    }
    cout<<n<<endl;
    return 0;
}