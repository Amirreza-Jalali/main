//#include"/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,m,count=0;
    cin>>n>>m;

    char v[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          cin>>v[i][j];
        }
    }
    
        for(int i=0; i<n-1; i++){
            for(int j=m-1; j<m; j++){
                if(v[i][j] == 'R'){
                    count++;
                    v[i][j] = 'D';
                }
            }
        }
   for(int i=n-1; i<n; i++){
            for(int j=0; j<m-1; j++){
                if(v[i][j] == 'D'){
                    count++;
                    v[i][j] = 'R';
                }
            }
        }
    cout<<count<<"\n";
    
}
int32_t main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;

}

