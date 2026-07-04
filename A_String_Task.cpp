#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++)
  {
      
       s[i]=tolower(s[i]);

  }
  s.erase(remove(s.begin(), s.end(), 'a'), s.end());
  s.erase(remove(s.begin(), s.end(), 'e'), s.end());
  s.erase(remove(s.begin(), s.end(), 'i'), s.end());
   s.erase(remove(s.begin(), s.end(), 'u'), s.end());
  s.erase(remove(s.begin(), s.end(), 'o'), s.end());
  for(int i=0;i<s.length();i++)
  {
    cout<<"."<< s[i];
  }
  return 0;

  
}