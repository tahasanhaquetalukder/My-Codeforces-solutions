#include<bits/stdc++.h>
using namespace std;
void bubbleSort(long long arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] < arr[j + 1]) // descending
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long arr[105];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if(n == 2)
        {
            long long x = max(arr[0], arr[1]);
            long long y = min(arr[0], arr[1]);
            if(x == y)
                cout << x << " " << y << '\n';
            else
                cout << x + y << " " << x << '\n';
            continue;
        }
        bubbleSort(arr, n);
        bool flag = true;
        for(int i = 1; i < n - 1; i++)
        {
            if(arr[i - 1] % arr[i] != arr[i + 1])
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout << arr[0] + arr[1] << " " << arr[0] << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
    return 0;
}