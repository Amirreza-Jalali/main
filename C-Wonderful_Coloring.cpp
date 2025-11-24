#include"/Users/apple/Desktop/computer/bits.cpp"

using namespace std;

string s;
int t, n, l;
 
int main() {
    cin >> t;
    while (t--) {
        cin >> n >> s;
        l = 0;
        while (l + 1 < n && s[l] == s[l + 1]) l++;
        if (l + 1 == s.length()) cout << -1 << ' ' << -1 << endl;
        else cout << l + 1 << ' ' << l + 2 << endl;
    }
    return 0;
}