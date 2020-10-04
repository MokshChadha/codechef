#include<bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif

int t;
cin>>t;

while(t--)
{	
	int n;
	cin>>n;
	int horses[n];

	for(int i =0 ; i<n;i++) cin>>horses[i];
	sort(horses, horses+n);
	int min=horses[1]-horses[0];
        for(int i=1;i<n-1;i++)
        if(horses[i+1]-horses[i]<min)
        min=horses[i+1]-horses[i];
	cout<<min;
}

return 0;

}
