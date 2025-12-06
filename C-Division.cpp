#include "/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n>=1900)
    {
        cout<<"Division 1\n";
    }
    else if(n>=1600 && n<=1899)
    {
        cout<<"Division 2\n";
    }
    else if(n>=1400 && n<=1599)
    {
        cout<<"Division 3\n";
    }
    else{
        cout<<"Division 4\n";
    }

}
int32_t main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}
