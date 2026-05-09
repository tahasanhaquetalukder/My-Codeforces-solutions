#include<iostream>

using namespace std;

int main()
{
    int t;

cin>>t;

string ans [1000];

for (int i=1; i<=t; i++)

{

int a,b,c;

cin>>a;

cin>>b;

cin>>c;

if (a+b==c || a+c==b || b+c==a)

{

ans [i]="YES";

}

else

{

ans[i]="NO";

}

}

for (int i=1; i<=t; i++)

{

cout<<ans [i]<<endl;

}
return 0;
}