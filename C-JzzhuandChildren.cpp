#include"/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,m,sum;
    queue <int> x,y;
    cin>>n>>m;
    int v[n],i;
    for(i=1;i<=n;i++){
        cin>>v[i];
    }
    for(i=1;i<=n;i++){
        x.push(v[i]);
        y.push(i);
    }
    while(!x.empty()){
        if(x.front()<=m){
            y.pop();
            x.pop();
        }
        else{
            x.push(x.front()- m);
            y.push(y.front());
            x.pop();
            y.pop();
        }
        sum=y.back();
    }
    cout<<sum<<"\n";
   
}

int32_t main()
{
  solve();
    return 0;
}