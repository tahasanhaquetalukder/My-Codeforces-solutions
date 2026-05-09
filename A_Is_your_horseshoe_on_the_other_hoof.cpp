#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   long long int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    int total=0;
    for(int i=0;i<4-1;i++)
    {
        for(int j=0;j<4-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        if(arr[i]==arr[i+1]){
            total++;
        }
    }
    cout<<total<<endl;
}