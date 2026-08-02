#include <bits/stdc++.h>
using namespace std;
int marge(int n,int m)
{
    int n1=n;
    int size=0;
    while(n!=0)
    {
        size++;
        n=n/10;
    }
    int mrg=(m*size)+n1;
}
int reverse(int n)
{
    int m=0;
    while(n!=0)
    {
        m=m*10+n%10;
        n=n/10;
    }
    return m;
}
void solution()
{
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int i=0;
    while (i<n)
    {
        if(arr.size()==1)
        {
            int k=pow(10,m);
            if(arr[0]<!k)
            {
                cout<<"Sasha"<<endl;
            }
            else{
                cout<<"Anna"<<endl;
            }
            break;
        }
        else if(i%2==0)
        {
            arr[0]=reverse(arr[0]);
        }
        else
        {
            int k=marge(arr[0],arr[1]);
            arr.erase(arr.begin()+1);
            arr.push_back(k);
        }
        i++;
    } 
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solution();
    }

    return 0;
}