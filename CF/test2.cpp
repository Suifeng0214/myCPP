//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
vector <int> box[100000];
int dp[100][100];
signed main() 
{ 
	//freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	for (int i = 0; i <= 100; i++) dp[i][0] = 1; 
	for (int i = 0; i <= 100; i++) dp[0][i] = 1; 
	for (int i = 1; i <= 100; i++){
		for (int j = 1; j <= 100; j++){
			dp[i][j] = dp[i-1][j]+dp[i][j-1];
		}
	}
	cout << dp[5][5] << "\n";
} 



