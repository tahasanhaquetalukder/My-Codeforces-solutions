#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    for(int i=1;;i++)
    {
        int k=a*i;
        if(k % 10 ==b || k % 10 ==0)
        {
            break;
        }
        else
        {
            count++;
        }
    }
    cout << count+1 << endl;
}