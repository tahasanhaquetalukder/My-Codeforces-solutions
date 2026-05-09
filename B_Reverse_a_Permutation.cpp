#include<iostream> 
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n!=0)
    {
      int m;
      cin>>m;
      int arr[m];
      for(int i=0;i<m;i++)
      {
        cin>>arr[i];
      }
      for(int i=m-1;i>=0;i--)
      {
        cout<<arr[i];
      }
      cout<<endl;
      n--;
    }
    
}