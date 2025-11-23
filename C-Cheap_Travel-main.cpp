//
//  main.cpp
//  C-Cheap Travel.cpp
//
//  Created by Apple on 2/24/23.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n, m, a, b;
        
        cin >> n >> m >> a >> b;
        if (m * a <= b)
            cout << n * a << "\n";
        else
            cout << (n/m) * b + min((n%m) * a, b) << "\n";
     
}
int32_t main( )
{
    solve();
    return 0;
}

