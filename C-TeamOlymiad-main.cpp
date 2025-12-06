//
//  main.cpp
//  C-TeamOlympiad.cpp
//
//  Created by Apple on 3/30/23.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n;
    cin>>n;
    vector<int > pro,math,pe;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x==1){ pro.push_back(i);
        }
        else if (x==2)
        {
            math.push_back(i);
        }
        else if(x==3){
            pe.push_back(i);
        }
    }
    int minn= min(math.size(),min(pro.size(),pe.size()));
    
    cout<<minn<<endl;
    for(int i=0;i<minn;i++)
    {
        cout<<math[i]<<" "<<pro[i]<<" "<<pe[i]<<endl;
    }
    
}
int32_t main( )
{
    solve( );
    return 0;
}
