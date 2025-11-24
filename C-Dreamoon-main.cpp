//
//  main.cpp
//  C-Dreamoon and Stairs.cpp
//
//  Created by Apple on 12/7/22.
//
// problem 476A codeforces

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n,m;
    cin>>n;
    cin>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        v[i]=i+1;
    }
    do{
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
        }
        
    }while(next_permutation(v.begin(), v.end()));// I learn this algorithm :)
    
}

int32_t main( )
{
    solve( );
}
