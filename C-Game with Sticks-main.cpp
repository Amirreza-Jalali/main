//
//  main.cpp
//  C-Game With Sticks.cpp
//
//  Created by Apple on 2/24/23.
//

#include"/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n,m;
    cin>>n>>m;
    if(n>m)
    {
        swap(n,m);
    }
    
    if(n%2==0)
    {
        cout<<"Malvika\n";
    }
    else {
        cout<<"Akshat\n";
    }
}
int32_t main( )
{
    solve();
    return 0;
}
