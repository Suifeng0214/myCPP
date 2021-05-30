#include<bits/stdc++.h>
#define int long long int
using namespace std;
pair<int, int> arr[100050];
priority_queue<int, vector<int>, greater<int> > Q;
int a;
int32_t main() {
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	while(cin >> a && a) {
		while(!Q.empty()) {
			Q.pop();
		}
		Q.push(0);
		for(int i=0; i < a; i ++) {
			cin >> arr[i].first;
		}
		bool flag = true;
		for(int i=0; i < a; i ++) {
			cin >> arr[i].second;
			if(arr[i].second < arr[i].first) flag = false;
		}
		if(!flag) {
			cout << -1 << '\n';
			continue;
		}
		for(int i=0; i < a; i ++) {
			if(Q.top() + arr[i].first > arr[i].second) {
				Q.push(arr[i].first);
			}
			else {
				int top = Q.top(); Q.pop();
				Q.push(top + arr[i].first);
			}
		}
		cout << Q.size() - 1 << '\n';
	}
	return 0;
}
