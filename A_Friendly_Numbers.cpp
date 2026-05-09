#include<bits/stdc++.h>
using namespace std;
int frie(int n)
{
     int sum=0;
   while(n>0)
   {
   
    sum=sum+n%10;
    n=n/10;
    
   }
   return sum;
}
int check(int n)
{
    int count=0;
    for(int i=n+1;i<=n+100;i++)
    {
        if(i-frie(i)==n)
        {
          count++;
        }
    }
    return count;
}
int main()
{
  int n;
  cin>>n;
  while(n!=0)
  {
    int a;
    cin>>a;
    cout<<check(a)<<endl;
    n--;

  }
  return 0;
}