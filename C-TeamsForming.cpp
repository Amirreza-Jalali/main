//#include"/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i:v) cin>>i;
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=0;i<n;i+=2)
    {
        if(v[i]!=v[i+1])
        {
           sum=sum+(v[i+1]-v[i]);
        }
    }
    cout<<sum<<"\n";
}
int32_t main()
{
    solve();

    return 0;
}