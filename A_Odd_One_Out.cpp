#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t!=0)
   {
     vector<int> a;
    int n=3;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
        int count = 0;
        for(int j=0; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        a.push_back(count);
    }
    int mini = a[0];
    for(int i=0; i<n; i++)
    {
        mini = min(mini, a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i] == mini)
        {
            cout << arr[i] << endl;
        }
    }
    t--;
   }
}