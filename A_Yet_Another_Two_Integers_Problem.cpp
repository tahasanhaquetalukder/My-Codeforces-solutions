#include<bits/stdc++.h>
using namespace std;
int find(int a,int b)
{
    int diff = abs(a - b);
    int count = (diff + 9) / 10;
    cout << count << endl;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    while(n != 0)
    {
        int a,b;
        cin >> a >> b;
        find(a,b);
        n--;
    }
    return 0;
}