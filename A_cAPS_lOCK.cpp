#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool ok = true;
    for(int i = 1; i < s.length(); i++)
    {
        if(!isupper(s[i]))
        {
            ok = false;
            break;
        }
    }    
    if(ok)
    {
       if(islower(s[0]))
            cout << (char)toupper(s[0]);
        else
            cout << (char)tolower(s[0]);

        for(int i = 1; i < s.length(); i++)
        {
            cout << (char)tolower(s[i]);
        }
    }
    else
    {
        cout << s; 
    }
    cout << endl; 
    return 0;
}