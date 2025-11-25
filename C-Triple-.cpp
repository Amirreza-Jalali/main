//
//  main.cpp
//  C-Triple.cpp
//
//  Created by Apple on 11/15/22.
//

//#include"/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n;
    cin >> n;
           vector <int> cnt(n + 1, 0);
           int ans = -1;
           for(int i = 0; i < n; i++) {
               int x; cin >> x;
               if(++cnt[x] >= 3) {
                   ans = x;
               }
           }
           cout << ans << endl;
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
