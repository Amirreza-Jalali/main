//
//  main.cpp
//  C-Fafa and his Company.cpp
//
//  Created by Apple on 11/7/22.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n,count=0;
    cin>>n;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0) count++;
        
    }
    cout<<count;
    
}
int32_t main( )
{
    solve();
    return 0;
}
