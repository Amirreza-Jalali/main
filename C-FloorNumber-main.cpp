//
//  main.cpp
//  C-FloorNumber.cpp
//
//  Created by Apple on 4/12/23.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n,x;
    cin>>n>>x;
    if(n==1 || n==2)
    {
        cout<<1<<"\n";
        return;
    }
    n-=2;
    int ans=n%x;
    if(ans == 0)
    {
        int ans1=n/x;
        cout<<ans1+1<<"\n";
    }
    else{
        int ans1=n/x;
        ans1+=2;
        cout<<ans1<<"\n";
    }
    
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
