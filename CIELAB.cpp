#include<bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif

int a, b; cin>>a>>b;
int sol = a-b;
int minus = sol-1;
int plus = sol+1;

if(to_string(sol).size()==to_string(minus).size()) cout<< minus;
	else cout<<plus;
}
