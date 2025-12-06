#include "/Users/apple/Desktop/computer/bits.cpp"

//#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
        int n;
        int count=0;

        cin>>n;
        vector<int> v(n);

        for(auto &i:v) cin>>i;

        int pos1 = 0,pos2 = 0;
        for(int i=0;i<n;i++){
            if(v[i] == 1){
                pos1 = i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(v[i] == 1){
                pos2 = i;
                break;
            }
        }
        for(int i=pos1;i<=pos2;i++){
            if(v[i] == 0){
                count++;
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






 