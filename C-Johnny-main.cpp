//  main.cpp
//  aa.cpp
//
//  Created by Apple on 5/28/22.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define ll long long

using namespace std;
void solve()
{
        ll t,a,b;
        cin>>t;
        while(t--)
        {
            ll c=0;
            cin>>a>>b;
            if(a == b){
                cout<<0<<endl;
                continue;
            }
            if(a > b){
                while(a > b){
                    if(a % 8 == 0 && a/8 >= b){
                        a /=8;
                        c++;
                    }
                    else if(a % 4 == 0 && a/4 >= b){
                        a /=4;
                        c++;
                    }
                    else if(a % 2 == 0 && a/2 >= b){
                        a /=2;
                        c++;
                    }
                    else{
                        break;
                    }
                }
            }
            else{
                while(a < b){
                    if(a * 8 <= b){
                        a *=8;
                        c++;
                    }
                    else if(a * 4 <= b){
                        a *=4;
                        c++;
                    }
                    else if(a * 2 <= b){
                        a *=2;
                        c++;
                    }
                    else{
                        break;
                    }
                }
            }
            if(a == b){
                cout<<c<<endl;
            }
            else{
                cout<<-1<<endl;
            }

        }
    }

int32_t main()
{
    solve( );
}
