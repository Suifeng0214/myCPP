#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[100010];
int b[100010];
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		b[i] = a[i] + b[i-1];
	}
	//for (int i : b) cout << i << " ";
	for (int i = 0; i < m; i++){
		int ai, bi;
		cin >> ai >> bi;
		if (bi < ai) swap(ai, bi);
		cout << b[bi] - b[ai-1] << "\n";
	}
} 


