//
//  main.cpp
//  C-Helpful Maths.cpp
//
//  Created by Apple on 12/1/22.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    string s,s1;
    cin>>s;
    
    sort(s.begin(), s.end());
    
    
    int sum=s.length()/2;
    for(int i=sum;i<s.length();i++)
    {
        if(i==s.length()-1)
        {
            cout<<s[i];
        }
        else{
            cout<<s[i]<<"+";
        }
        
    }
    cout<<s1;
}

int32_t main( )
{
    solve();
    return 0;
}
