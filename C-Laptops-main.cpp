//
//  main.cpp
//  C-Laptops.cpp
//
//  Created by Apple on 11/1/22.
//

//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i][1]>a[i][0])
        {
            cout<<"Happy Alex\n";
            return;
        }
    }
    cout<<"Poor Alex\n";
    
}

int32_t main( )
{
    solve();
    return 0;
}
