//#include"/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
 using namespace std;
 #define int long long 
 void solve()
 {
     int c1,c2,c3;
     int count=0;
     cin>>c1>>c2>>c3;
     int a1,a2,a3,a4,a5;
     cin>>a1>>a2>>a3>>a4>>a5;
     vector<int> v;
     if (a1 <= c1 && a2 <= c2 && a3 <= c3)
		{
			if (a4 <= (c1 - a1) + (c3 - a3)) {
				if (a4 - (c1 - a1) >=  0)
				{
					if (a5 <= (c2 - a2) + ((c3 - a3) - (a4 - (c1 - a1))))
					{
						cout << "yes";
					}
					else {
						cout << "NO";
					}
				}
				if (a4 - (c1 - a1) <  0) {
					if (a5 <= (c2 - a2) + ((c3 - a3)))
					{
						cout << "yes";
					}
					else {
						cout << "NO";
					}
				}
			}
			else
				cout << "NO";
		}

		else {
			cout << "NO";
		}
		cout << endl;
    }

 


 int32_t main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         solve();
     }
     return 0;
 }
