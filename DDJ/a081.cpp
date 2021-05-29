//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define F first
#define S second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
#define mid ((l+r)/2)
#define PII pair<int, int>

signed main() 
{ 
	//freopen("in.txt", "r", stdin);
//	freopen("ans.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	vector <pair <int, int> > arr;
	priority_queue <int, vector<int>, greater<int> > pqg;
	while(cin >> n){
		arr.clear();
		while(!pqg.empty()) pqg.pop();
		int l, r;
		for (int i = 0; i < n; i++){
			cin >> l >> r;
			arr.emplace_back(l, r);
		}
		sort(arr.begin(), arr.end());
		int T = arr[0].F, ans = 0;
		for (int i = 0; i < n;){
			if (arr[i].F <= T){
				pqg.emplace(arr[i].S);
			}
			if (i==n-1 || arr[i+1].F != T){ //hit
				while (!pqg.empty() && T <= pqg.top()){
					ans++;
					pqg.pop();
					T++;
				}
			}
			if (i==n-1 || T >= arr[i+1].F){
				i++;
				continue;
			}
			if (pqg.empty()){
				i++;
				T=arr[i].F;
			}
		}
		cout << ans << "\n";
	//	for (auto i : arr) cout << i.F << " " << i.S << "\n";
	//	cout << "\n";
	}
}
