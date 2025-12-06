//
//  main.cpp
//  C-Arena.cpp
//
//  Created by Apple on 3/15/23.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n,count(0);
    cin>>n;
    vector<int > v(n);
    for(auto &i:v) cin>>i;
    sort(v.rbegin(), v.rend());
    int min= *min_element(v.begin(), v.end());
    for(int i=0;i<n;i++)
    {
        if( v[i]>min)
        {
            count++;
        }
    }
    cout<<count<<endl;
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
