//
//  main.cpp
//  C-Lights Out.cpp
//
//  Created by Apple on 3/1/23.
//

//#include "/Users/apple/Desktop/computer/bits.cpp"
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int array[3][3];
    int begin[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>array[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            if(i==0 && j==0)
            {
                sum=array[i][j+1] + array[i+1][j] + array[i][j];
                begin[0][0]=sum;
            }
            else if(i==0 && j==1)
            {
                sum=array[i][j+1] + array[i][j-1] + array[i+1][j] + array[i][j];
                begin[0][1]=sum;
            }
            else if(i==0 && j==2)
            {
                sum= array[i][j-1] + array[i+1][j] + array[i][j];
                begin[0][2]=sum;
            }
            else if(i==1 && j==0)
            {
                sum=array[i][j+1] + array[i-1][j] + array[i+1][j] + array[i][j];
                begin[1][0]=sum;
            }
            else if(i==1 && j==1)
            {
                sum=array[i][j+1] + array[i][j-1] + array[i+1][j] + array[i-1][j] + array[i][j];
                begin[1][1]=sum;
            }
            else if(i==1 && j==2)
            {
                sum= array[i][j-1] + array[i+1][j] + array[i-1][j] + array[i][j];
                begin[1][2]=sum;
            }
            else if(i==2 && j==0)
            {
                sum=array[i][j+1] + array[i-1][j] + array[i][j];
                begin[2][0]=sum;
            }
            else if(i==2 && j==1)
            {
                sum=array[i][j+1] + array[i][j-1] + array[i-1][j] + array[i][j];
                begin[2][1]=sum;
            }
            else if(i==2 && j==2)
            {
                sum=array[i][j-1] + array[i-1][j] + array[i][j];
                begin[2][2]=sum;
            }
            
        }
    }
    
    
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(begin[i][j]%2 == 0)
            {
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
    
    
    
}
int32_t main( )
{
    solve();
    return 0;
}
