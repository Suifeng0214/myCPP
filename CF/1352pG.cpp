#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
//set <int> st;
//map <int, int> mp;
deque <int> ans;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		ans.clear();
		if (n <= 3){
			cout << "-1\n";	
			continue;
		} 
		bool c=0;
		ans.emplace_back(2);
		ans.emplace_back(4);
		ans.emplace_back(1);
		ans.emplace_back(3);
		for (int i = 5; i <= n; i++){
			if (c){
				ans.emplace_back(i);
			}else{
				ans.emplace_front(i);
			}
			c= !c;
		}
		for (int i : ans) cout << i << " ";
		cout << "\n";
		
	}
} 


