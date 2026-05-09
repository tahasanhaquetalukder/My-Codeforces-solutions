#include<iostream> 
using namespace std;
int main()
{
  int m;
  cin>>m;
  while(m!=0)
  {
  int n;
  cin>>n;
  string s;
  cin>>s;
  int sum=1;
  for(int i=0;i<n;i++)
  {
    if(i == n-1 && s[i]=='L')
    {
        sum=sum+0;
    }
    else if(s[i] == 'R' )
    {
        sum++;
    }
    else if( s[i]=='L')
    {
        sum--;
    }
  }

  cout<<sum<<endl;
  m--;
}
  return 0;
}