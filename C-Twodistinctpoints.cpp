//#include"/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int r1,l1,r2,l2;
    cin>>l1>>r1>>l2>>r2;
    int sum1=0,sum2=0;
    int v[4]={l1,r1,l2,r2};
    sum1=r1-l1;
    sum2=r2-l2;
    for (auto it : v) for (auto it1 : v) {
			if (l1 <= it && it <= r1 && l2 <= it1 && it1 <= r2 && it != it1) 
            {
				sum1 = it;
				sum2 = it1;
			}
		}
		cout<<sum1<<"  "<<sum2;
    cout<<"\n";
}
int32_t main()
{
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}