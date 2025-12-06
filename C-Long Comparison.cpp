//#include "/Users/apple/Desktop/computer/bits.cpp"
#include<bits/stdc++.h>
using namespace std;
#define int long long
    int get(int n) {
	int digc = 0;
	while (n) {
		++digc;
		n /= 10;
	}
	return digc;
}
void solve(){
    int x1, p1, x2, p2;
	cin >> x1 >> p1 >> x2 >> p2;

	int len1 = get( x1 ) + p1;
	int len2 = get( x2 ) + p2;

	if (len1 < len2)
		cout << " < " ;
	else if (len1 > len2)
		cout << " > " ;
	else {
		if (p1 < p2) {
			int d = p2 - p1;

			for(int i=0;i<d;i++) {
				x2 *= 10;
			}
		}
		else if (p1 > p2) {
			int d = p1 - p2;

			for (int i=0;i<d;i++) {
				x1 *= 10;
			}
		}

		if (x1 < x2)
			cout << " < ";
		else if (x1 > x2)
			cout << " > ";
		else{
			cout << " = ";
        }
	}

}

int32_t main() {
	int t ;
	cin >> t;
	while (t--) {
		solve();
		cout << '\n';
	}

	return 0;
}