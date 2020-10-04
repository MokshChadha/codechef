#include<bits/stdc++.h>
using namespace std;


int main()
{
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif*/

int t;
cin>>t;

while(t--)
{	
	int n; cin>>n;
	int arr[n];
	for(int i=0; i<n ; i++)
	cin>>arr[i];
	
	int uncleJohn; cin>>uncleJohn;
	int value = arr[uncleJohn-1];
	sort(arr, arr+n);

	for(int i =0 ; i<n; i++) if(arr[i] == value) {cout<<i+1<<"\n"; break;}
}

return 0;

}
