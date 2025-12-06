//
//  main.cpp
//  C-testBitMask.cpp
//
//  Created by Apple on 5/3/23.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
//#define int long long
using namespace std;
void solve( )
{
    int x=5328;
    cout<<x<<"\n";
    cout<< __builtin_clz(x)<<"\n";
    cout<< __builtin_ctz(x)<<"\n";
    cout<< __builtin_popcount(x) <<"\n";
    cout<< __builtin_parity(x)<<"\n";
}

int32_t main( )
{
    solve();
    return 0;
}
