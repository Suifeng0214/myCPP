//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define F first
#define S second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
priority_queue <int> pq;
vector <pair <int, int>> arr;
signed main() 
{ 
//	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, a, b;
	while(cin >> n){
		arr.clear();
		while(!pq.empty()) pq.pop();
		for (int i = 0; i < n; i++){
			cin >> a >> b;
			arr.emplace_back(b, a);
		}
		sort(arr.rbegin(), arr.rend());
		int print_machine = 0;
		for (auto i : arr){
			print_machine += i.S;
			pq.emplace(print_machine + i.F);
		}
		cout << pq.top() << "\n";
	}
}
