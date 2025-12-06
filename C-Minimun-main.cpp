//
//  main.cpp
//  C-Minimum Varied Number.cpp
//
//  Created by Apple on 1/6/23.
//

//#include "/Users/apple/Desktop/computer/bits.cpp"
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int s;
    cin >> s;
    string result;
    for (int d = 9; d >= 1; d--)
        if (s >= d) {
        result = char('0' + d) + result;
                s -= d;
        }
            cout << result << endl;
}
        

int32_t main( )
{
    int t;
    cin>>t;
    while (t--) {
        solve( );
        cout<<endl;
    }
    return 0;
}
