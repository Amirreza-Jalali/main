//
//  main.cpp
//  C-Magic Numbers.cpp
//
//  Created by Apple on 3/27/23.
//
#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace  std;
void solve( )
{
    string s;
    cin>>s;
    
    if(s[0] !='1')
    {
        cout<<"NO\n";
        return;
    }
    
    for(int i=0;i<s.size()-1;i++)
    {
        
            
            if(s[i]=='4' && s[i+1]=='4' && s[i+2]=='4')
            {
                cout<<"NO\n";
                return;
            }
            
            if(s[i]=='1')
            {
                if( s[i+1]=='4' || s[i+1]=='1')
                {
                    continue;
                }
                else{
                    cout<<"NO\n";
                    return;
                }
            }
            else if (s[i]=='4')
            {
                if(s[i+1]=='1' || s[i+1]=='4' )
                {
                    continue;
                }
                else{
                    cout<<"NO\n";
                    return;
                }
            }
        }
    
    cout<<"YES\n";
}
int32_t main( )
{
    solve();
    return 0;
}
