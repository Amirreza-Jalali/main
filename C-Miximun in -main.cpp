//
//  main.cpp
//  C-Maximum in Table.cpp
//
//  Created by Apple on 11/7/22.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        a[0][i]=1;
        a[i][0]=1;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    cout<<a[n-1][n-1];
}
int32_t main( )
{
    solve();
    return 0;
}
