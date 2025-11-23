//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
	cin >> t;
	while (t--){

		int n;
		cin >> n;
		for (int i = 1; ; i++)
		{
			if (i % 3 == 0 || i % 10 == 3)
				continue;
			if (--n== 0){
				cout << i << '\n';
				break;
			}
		}
	}
}
int main()
{
    solve();
	
    return 0;
}