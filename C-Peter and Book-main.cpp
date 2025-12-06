//
//  main.cpp
//  C-Petr and Book.cpp
//
//  Created by Apple on 3/20/23.

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve( )
{
    int n,ans=0,i=0;
    cin>>n;
    vector<int> v(7);
    for(auto &i:v) cin>>i;
    
    int t = v[0];

        while (t < n)
        {
            i++;
            i %= 7;
            t += v[i];
        }

        cout << i + 1 << endl;
}

int32_t main( )
{
    solve();
    return 0;
}
