//
//  main.cpp
//  FCFS
//
//  Created by Apple on 11/16/22.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
#define int long long
using namespace std;
void solve( )
{
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
            
        }
    }
    double waitting=0;
    int sum=a[0][1];
    vector<int > v(n);
   
    int sumtotal=0;
    for(int i=0;i<n;i++)
    {
        sumtotal+=a[i][1];
        v[i]=sumtotal;
    
    }
    for(int i=0;i<n;i++)
    {
        sum=(v[i]-a[i][0]-a[i][1]);
        waitting+=sum;
    }
    cout<<" ------------------------------\n";
    for(int i=1;i<=n;i++)
    {
        cout<<"P"<<i<<" | ";
    }
    cout<<"\n"<<"watting time = "<<waitting/n<<"\n";
    
    
}
int32_t main( )
{
    solve();
    return 0;
}
