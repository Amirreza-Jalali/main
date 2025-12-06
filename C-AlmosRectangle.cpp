#include"/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i=0;i<int(n);i++)

void solve()
{
        int n;
        cin >> n;
        vector<string> f(n);
        vector<pair<int,int> > p;
        forn(i,n) {
            cin>>f[i];
            forn(j,n)
                if (f[i][j]=='*')
                    p.push_back ({i,j});
        }

        p.push_back(p[0]);
        p.push_back(p[1]);
        if (p[0].first == p[1].first) {
            p[2].first = (p[2].first + 1) % n;
            p[3].first = (p[3].first + 1) % n;
        } else if (p[0].second == p[1].second) {
            p[2].second = (p[2].second + 1) % n;
            p[3].second = (p[3].second + 1) % n;
        } else
            swap(p[2].first, p[3].first);

        f[p[2].first][p[2].second] = '*';
        f[p[3].first][p[3].second] = '*';
        forn(i, n)
            cout <<f[i]<<"\n";
    }


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}


/*
int n;
    cin>>n;
    char v[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i][j]=='*')
            {
                v[j][i]='*';
                v[i][i]='*';
                v[j][j]='*';
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j];
        }
        cout<<"\n";
    }
    */