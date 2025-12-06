#include "/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n;
    cin>>n;
    string v;
    cin>>v;
    int zero= count(v.begin(),v.end(),'0');
    int one=count(v.begin( ),v.end( ),'1');
    int ans= n-(2*(min(zero,one)));
    cout<<ans;
}

int32_t main( )
{
    solve( );
    return 0;
}