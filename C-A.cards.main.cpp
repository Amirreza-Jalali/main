//
//  main.cpp
//  C-A.Cards.cpp
//
//  Created by Apple on 1/31/23.
//

//#include "/Users/apple/Desktop/computer/bits.cpp"
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    array<int, 100> a;
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='z')
        {
            a[j]=0;
            j++;
        }
        else if (s[i]=='n')
        {
            a[j]=1;
            j++;
        }
    }
    sort(a.begin(),a.begin()+j);
    for(int i=j-1;i>=0;i--)
    {
       
        cout<<a[i]<<" ";
    }
}

int32_t main( )
{
    solve();
    return 0;
}
 
