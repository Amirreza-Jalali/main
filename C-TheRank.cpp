//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
	int n,count=1;
	cin>>n;
	int v1[n][4];
	vector<int> v2(n);
	for(int i=0;i<n;i++)
	{
		for(int j=0 ;j<4;j++)
		{
			cin>>v1[i][j];
		}
	}
	

	for(int i=0 ; i<n ; i++)
	{
		int sum=0;
		for(int j=0 ; j<4 ; j++)
		{
			sum+=v1[i][j];
		}
		v2[i]=sum;
	}
	for(int i=0 ; i<n ; i++)
	{
		if(v2[0]<v2[i]) count++;
	}

	cout<<count;

}
int32_t main()
{
	solve();

	return 0;
}


