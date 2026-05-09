#include<bits/stdc++.h>
using namespace std;
void check(char ch)
{
    int c=0;
    string s="codeforces";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==ch)
        {
          c++;
        }
       
    }
     if(c>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
}
int main()
{
      int n;
      cin>>n;
      while( n!=0)
      {
          char ch;
          cin>>ch;
          check(ch);
          n--;
      }
}