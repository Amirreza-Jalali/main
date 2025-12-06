//#include"/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin>>n;
    vector<int > v(n);
    for(auto &i:v) cin>>i;
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=1;i<=n-1;i++)
    {
         sum+=v[i]-v[i-1]-1;
    }
    cout<<sum;

}
int32_t main()
{
    solve();
    return 0;
}