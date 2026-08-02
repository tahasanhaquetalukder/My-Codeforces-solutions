#include <bits/stdc++.h>
using namespace std;
void PrintPrime(int n)
{
    vector<bool> isprime(n, true);
    for (int i = 2; i * i < n; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j < n; j += i)
            {
                isprime[j] = false;
            }
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (isprime[i])
            cout << i << " ";
    }
    cout << '\n';
}
int main()
{
    int n;
    cin >> n;
    PrintPrime(n);
}