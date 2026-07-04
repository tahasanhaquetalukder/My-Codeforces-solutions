#include<bits/stdc++.h>
using namespace std;
void print(int a[], int b[], int n)
{
    long long sum = 0;
    long long max_of_min = 0;
    for(int i = 0; i < n; i++)
    {
        long long big = max((long long)a[i], (long long)b[i]);
        long long small = min((long long)a[i], (long long)b[i]);
        sum += big;
        max_of_min = max(max_of_min, small);
    }
    cout << sum + max_of_min << endl;
}
int main()
{
    int c;
    cin >> c;
    while(c != 0)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for(int &k: a)
        {
            cin >> k;
        }
        for(int &k: b)
        {
            cin >> k;
        }
        print(a, b, n);
        c--;
    }
    return 0;
}