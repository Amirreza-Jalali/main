
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,c;
    cin>>n>>c;
    vector<int>v(n);

    for(auto & i:v) cin>>i;

    int count=0;
    for(int i=0;i<n-1;i++)
    {
        int sum=v[i+1]-v[i];
        if(sum <= c)
        {
            count++;
        }
        else{
            count=0;
        }
    }
    cout<<count+1;
}
int32_t main()
{
    solve();

    return 0;
}
