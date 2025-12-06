//#include"/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,m;
    cin>>n>>m;
    char v[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)  
        {
            cin>>v[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        int flag=0;
        for(int j=0;j<m;j++)
        {
            if(v[i][j]=='S')
            {
                flag=1;
            }
            
        }
        if(flag == 0)
        {
                for(int o=0;o<m;o++)
                {
                    if(v[i][o]=='1')
                    {
                        count++;
                    }
                    else{
                        v[i][o]='1';
                    }
            }
        }
    }
     for(int j=0;j<m;j++)
    {
        int count=0;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(v[i][j]=='S')
            {
              flag=1;
            }
        }
        if(flag == 0)
        {
                for(int p=0;p<n;p++)
                {
                    if(v[p][j]=='1')
                    {
                        count++;
                    }
                    else{
                        v[p][j]='1';
                    }
                } 
        }
    }
    int count1=0;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]=='1')
            {
                count1++;
            }
        }
    }
    cout<<count1;
}
int32_t main()
{
    solve();
    return 0;
}
