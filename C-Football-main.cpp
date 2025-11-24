//
//  main.cpp
//  C-Football.cpp
//
//  Created by Apple on 12/20/22.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve( ){
    int n, goal(0);
        cin >> n;

        string team, win;
        while (n--)
        {
            if (goal != 0)
            {
                cin >> team;
                if (team == win)
                {
                    goal += 1;
                }
                else
                {
                    goal -= 1;
                }
            }
            else
            {
                cin >> win;
                goal = 1;
            }
        }
        cout << win << endl;
}

int32_t main( )
{
    solve();
    
    return 0;
}

