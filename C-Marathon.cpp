//#include "/Users/apple/Desktop/computer/bits.cpp"
#include <bits/stdc++.h>
#define int long long
using namespace std;
 
void solve()
{
    int a,b,c,d;
    int count=0;
    cin>>a>>b>>c>>d;
    if(a<=b)
    { 
        count++;
    }
    if(a<=c) 
    {
        count++;
    }
    if(d>=a)
    { 
        count++;
    }

    cout<<count<<'\n';

}

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}