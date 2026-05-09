#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ll;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ll.push_back(a);
    }

    int f = 0, s = 0;

    for(int i = 1; i <= n; i++)
    {
        int front = ll.front();
        int back = ll.back();

        if(i % 2 != 0) // first player
        {
            if(front > back)
            {
                f += front;
                ll.pop_front();
            }
            else
            {
                f += back;
                ll.pop_back();
            }
        }
        else // second player
        {
            if(front > back)
            {
                s += front;
                ll.pop_front();
            }
            else
            {
                s += back;
                ll.pop_back();
            }
        }
    }

    cout << f << " " << s << endl;
}