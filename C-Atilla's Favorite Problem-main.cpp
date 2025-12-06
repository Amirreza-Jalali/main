//
//  main.cpp
//  C-Atilla's Favorite Problem.cpp
//
//  Created by Apple on 1/1/23.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<char> v {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    vector<int> ans(n);
    int ii=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(s[i]==v[j])
            {
                    ans[ii]=j;
                    ii++;
            }
        }
    }
    int min=  *max_element(ans.begin(),ans.end());
    cout<<min+1<<endl;
    
    
    
}
int32_t main( )
{
    int t;
    cin >>t;
    while(t--)
    {
        solve();
    }
}

