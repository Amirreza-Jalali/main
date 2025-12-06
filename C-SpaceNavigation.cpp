//#include"/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    int x,y;
    int countR=0,countL=0,countD=0,countU=0;
    cin>>x>>y;
    cin>>s;
    int n=s.length();
    for (int i = 0; i < n; ++i)
		{
			if (s[i] == 'R')
				countR++;
			else if (s[i] == 'L')
				countL++;
			else if (s[i] == 'U')
				countU++;
			else
				countD++;
		}

		int flagX= 0,flagY = 0;

		if (x >= 0) {
			if (countR >= x)
				flagX = 1;
		}
		else {
			if (countL >= abs(x))
				flagX = 1;
		}


		if (y >= 0) {
			if (countU >= y)
				flagY = 1;
		}
		else {
			if (countD >= abs(y))
				flagY = 1;
		}


		if (flagX == 1 && flagY == 1){
			cout << "YES\n";
            return;
        }
		else{
			cout << "NO\n";
            return;
        }
		
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






/////////////////
/*void solve()
{
    string s;
    int px,py,x=0,y=0;
    cin>>px>>py;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if (px==x)
        {
            
        }
        else{
            if(s[i]=='R') x++;
            else if(s[i]=='L') x--;
        }
    }
    for(int i=0;i<n;i++)
    {
        if (py==y)
        {
            break;
        }
        else{
            if(s[i]=='U') y++;
            else if(s[i]=='D') y--;
        }
    }

    if(px==x && py==y)
    {
        cout<<"YES\n";
        return;
    }
    else if (px!=x || py!=y){
        cout<<"NO\n";
        return;
    }
}

*/