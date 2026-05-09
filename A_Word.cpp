#include<iostream>
using namespace std;
int main()
{
char ch[100];
cin>>ch;
int uppercase=0,lowercase=0;
for(int i=0;ch[i]!='\0';i++)
{
    if(ch[i]>='a' && ch[i]<='z')
    {
        lowercase+=1;
    }
    else  if(ch[i]>='A' && ch[i]<='Z')
    {
        uppercase+=1;
    }
}
for(int i=0;ch[i]!='\0';i++)
{
    if(uppercase>lowercase)
    {
        if(ch[i]>='a' && ch[i]<='z' )
        {
            ch[i]=ch[i]-32;
        }
        else
        {
            ch[i]=ch[i];
        }
    }
    else  if( lowercase > uppercase || uppercase==lowercase )
    {
        if(ch[i]>='a' && ch[i]<='z' )
        {
            ch[i]=ch[i]+32;
        }
        else
        {
            ch[i]=ch[i];
        }
    }
    cout<< ch<<endl;
}
return 0;

}