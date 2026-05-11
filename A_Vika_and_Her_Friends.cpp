#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int x, y;
        cin >> x >> y;
        bool ok = true;
        for(int i = 0; i < k; i++)
        {
            int xi, yi;
            cin >> xi >> yi;
            if((x + y) % 2 == (xi + yi) % 2)
            {
                ok = false;
            }
        }
        if(ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}