//
//  main.cpp
//  C-YES or YES.cpp
//
//  Created by Apple on 11/3/22.
//

//#include "/Users/apple/Desktop/computer/bits.cpp"
#include < bits/stdc++.h >
#define int long long
using namespace std;
void solve( )
{
    int count=0;
    string s;
    cin>>s;

    if(s[0]=='Y' || s[0]=='y')
    {
        count++;
    }
    if (s[1]=='E' || s[1]=='e')
    {
        count++;
    }
    if (s[2]=='S' || s[2]=='s')
    {
        count++;
    }
    if(count==3)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
        
}
 int32_t main ( )
{
     int t;
     cin>>t;
     while (t--) {
         solve();
     }
     return 0;
}
