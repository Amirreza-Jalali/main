//
//  main.cpp
//  C-CodeforcesChecking.cpp
//
//  Created by Apple on 4/12/23.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    vector<char> v={'c','o','d','e','f','o','r','c','e','s'};
    char x;
    cin>>x;
    for(int i=0;i<10;i++){
        if(v[i]==x)
        {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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
