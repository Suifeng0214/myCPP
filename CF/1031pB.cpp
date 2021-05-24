//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
const int N = 1e5+10;
int n;
int t[N];
int a[N];
int b[N];
bool dfs(int x, int now){
	t[now] = x;
	if (now == n-1){
		cout << "YES\n";
		for (int i = 0; i < n; i++){
			cout << t[i] << " ";
		}
		cout << "\n";
		return true;
	}
	for (int i = 0; i < 4; i++){
		if ((x|i) == a[now] && (x&i) == b[now]){
			 return dfs(i, now+1);
		}
	}
	return false;
}
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n-1; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n-1; i++){
		cin >> b[i];
	}
	for (int i = 0; i < 4; i++){
		if (dfs(i, 0)){
			return 0;
		}
	}
	cout << "NO\n";
} 


