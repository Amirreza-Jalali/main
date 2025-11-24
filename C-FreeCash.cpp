#include"/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, count=1,max=1;
	cin>>n;
	int hour1,min1;
	cin>>hour1>>min1;
	int h,m;
	while(--n){
	    cin>>h>>m;
	    if(hour1==h && min1==m)
        {
	        count++;
	        if(count>max)
            {
	            max=count;
	        }
	    }
        else
        {
	        count=1;
	    }
	    hour1=h;
	    min1=m;
	}
	cout<<max;
}
int32_t main()
{
    solve();

    return 0;
}