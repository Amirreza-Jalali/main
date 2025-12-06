//#include"/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{

    int n,m;
    cin >>n>>m;
    int a[n][m];
		set<int> r,c;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				cin >> a[i][j];
				if(a[i][j] == 1)
					r.insert(i), c.insert(j);
			}
		}
		int mn = min(n-r.size(), m-c.size());
		if(mn % 2){
			cout << "Ashish\n";
        }
		else{
			cout << "Vivek\n";
        }
}
int32_t main()
{
    int t;
    cin>>t;
    while (t-- )
    {
       solve();
    }

    return 0;
}
