#include <bits/stdc++.h>
using namespace std;
int mini(vector<int> arr)
{
    int mn=0;
    for(int i=0;i<arr.size()-1;i++)
    {
        for(int j=1;j<arr.size();j++)
        {
          int k=abs(arr[j]-arr[i]);
          mn=min(k,mn);  
        }
    }
    return mn;
}
void solution()
{
  int n,m;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++)cin>>arr[i];
  while(n--)
  {
    int fr=mini(arr);
    arr.push_back(fr);
  }
  sort(arr.begin(),arr.end());
  cout<<arr[0]<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solution();z
    }
    return 0;
}