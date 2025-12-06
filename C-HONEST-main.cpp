//
//  main.cpp
//  aa.cpp
//
//  Created by Apple on 10/25/22.
//

//#include "/Users/apple/Desktop/computer/bits.cpp"
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    
    int result = v[n - 1] - v[0];

            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    result = min(result, v[j] - v[i]);
                }
            }

            cout << result << endl;
    
}

int32_t main()
{
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
