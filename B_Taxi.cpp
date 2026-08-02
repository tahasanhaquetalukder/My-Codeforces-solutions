// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     int sum=0;
//     for(int &a: arr)
//     {
//         cin>>a;
//         sum+=a;
//     }
//     if(sum%4==0)
//     {
//         cout<<sum/4<<endl;
//     }
//     else{
//         cout<<(sum/4)+1<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int m=0;
    while(n%10==0)
    {
        m++;
        n=n/10;
    }
    cout<<m<<endl;
    return 0;
} 