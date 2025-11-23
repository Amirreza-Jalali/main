//
//  main.cpp
//  C-Amusing Joke.cpp
//
//  Created by Apple on 11/23/22.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    string s1,s2,stotal;
    int count=0;
    cin>>s1>>s2;
    cin>>stotal;
    /*cout<<" ***********************************\n";
    cout<<"s1 : "<<s1<<"\n";
    cout<<"s2 : "<<s2<<"\n";
    cout<<"stotal : "<<stotal<<"\n";
    cout<<" ***********************************\n";
     */


    int sum=s1.length()+s2.length();
    if(sum!=stotal.length())
    {
        cout<<"NO\n";
        return;
    }
    
    for(int i=0;i<s1.length();i++)
    {
        int flag=0;
        for(int j=0;j<stotal.length();j++)
        {
            if(s1[i] == stotal[j])
            {
                stotal[j]='?';
                count++;
                flag=0;
                break;
            }
            else{
                flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"NO\n";
            return;
            
        }
        
    }
    /*cout<<" ***********************************\n";
    cout<<"count : "<<count<<"\n";
    cout<<"s1 : "<<s1<<"\n";
    cout<<"s2 : "<<s2<<"\n";
    cout<<"stotal : "<<stotal<<"\n";
    cout<<" ***********************************\n";
     */
    for(int i=0;i<s2.length();i++)
    {int flag=0;
        for(int j=0;j<stotal.length();j++)
        {
            if(s2[i] == stotal[j])
            {
                stotal[j]=0;
                count++;
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"NO\n";
            return;
        }
    }
    if(count==stotal.length())
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    /*cout<<" ***********************************\n";
    cout<<"count : "<<count<<"\n";
    cout<<"s1 : "<<s1<<"\n";
    cout<<"s2 : "<<s2<<"\n";
    cout<<"stotal : "<<stotal<<"\n";
    cout<<" ***********************************\n";
     */
}
int32_t main( )
{
    solve();
    return 0;
}
