//
//  main.cpp
//  C-Download More RAM.cpp
//
//  Created by Apple on 3/5/23.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n,k;
    cin>>n>>k;
    int m=2;
    vector<pair<int, int>> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first;
    }
    for(int i=0;i<n;i++)
    {
        cin>>v[i].second;
    }
    
    
    sort(v.begin(), v.end());
    for(int i=0;i<n;i++)
    {
        if(k<v[i].first)
        {
            break;
        }
        k+=v[i].second;
    }
    cout<<k<<endl;

}
int32_t main( )
{
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
