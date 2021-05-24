#include <bits/stdc++.h>
using namespace std;
#define int long long
string longestPalindrome(string& s);
bool isPalindrome(string &s);
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string in;
	int q;
	cin >> q;
	while(q--){
		cin >> in;
		cout << longestPalindrome(in) << "\n";
	}
}

string longestPalindrome(string& s)
{
        string result;
        if (s.empty()) return s;

        int n = s.size();
        int longest = 0, left = 0, right = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j <= n; ++j) {
                string substr = s.substr(i, j - i);
                if (isPalindrome(substr) && substr.size() > longest) {
                    longest = j - i;
                    left = i;
                    right = j;
                }
            }
        }

        result = s.substr(left, right - left);
        return result;
}

bool isPalindrome(string &s)
{
        int n = s.size();
        for (int i = 0; i < n; ++i) {
            if (s[i] != s[n - i - 1]) return false;
        }
        return true;
}

