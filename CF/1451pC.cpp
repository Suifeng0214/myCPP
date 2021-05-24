#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;
int cnt_a[200];
int cnt_b[200];
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		memset(cnt_a, 0, sizeof(cnt_a));
		memset(cnt_b, 0, sizeof(cnt_b));
		int n, k;
		cin >> n >> k;
		string a, b;
		cin >> a >> b;
		for (int i = 0; i < n; i++){
			cnt_a[a[i]]++;
			cnt_b[b[i]]++;
		}
		bool flag = 0;
		for (int i = 'a'; i < 'z'; i++){
			if (cnt_a[i] < cnt_b[i] || (cnt_a[i] - cnt_b[i]) % k)
				break;
			if (i=='y') flag = 1;
			cnt_a[i+1] += cnt_a[i]-cnt_b[i];
		}
		if (flag) cout << "Yes\n";
		else cout << "No\n";
	}	
} 


