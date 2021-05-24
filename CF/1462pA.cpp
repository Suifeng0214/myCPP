#include <bits/stdc++.h>
using namespace std;
#define int long long
deque <int> dq;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		dq.clear();
		int n;

		cin >> n;
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			dq.emplace_back(tmp);
		}
		bool ck=0;
		while(!dq.empty()){
			if (ck%2==0){
				cout << dq.front() << " ";
				dq.pop_front();
			}else{
				cout << dq.back() << " ";
				dq.pop_back();
			}
			ck = !ck;
		}
		cout << "\n";
	}
} 
