#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n!=0){
    int r;
    cin>>r;
    if(1900<=r)
    {
        cout<<"Division 1"<<endl;

    }
    else if(1600<=r && r<=1899)
    {
        cout<<"Division 2"<<endl;
    }
    else if(1400<=r && r<=1599)
    {
        cout<<"Division 3"<<endl;

    }
    else{
        cout<<"Division 4"<<endl;
    }
    n--;
  }  
  return 0;
}