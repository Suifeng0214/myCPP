#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		a.clear();
		int n0, n1, n2;
		cin >> n0 >> n1 >> n2;
		if (n2 != 0) a.emplace_back(1);
		for (int i = 0; i < n2; i++){
			a.emplace_back(1);
		}
		
		if (n0 != 0 ) a.emplace_back(0);
		for (int i = 0; i < n0; i++){
			a.emplace_back(0);
		}
		
		int cnt = 0;
		if (a.size())
		for (int i = 0; i < a.size()-1; i++){
			if (a[i] == 0 && a[i+1] == 1 || (a[i] == 1 && a[i+1] == 0)){
				cnt++;
			}
		}
		bool c;
		if (a.size() == 0){
			a.emplace_back(1);
			c = 0;
		}else{
			if (a[a.size()-1] == 0){
				c=1; // 101010
			}else{
				c=0; // 010101
			}
		}
		
		int x = n1-cnt;
		for (int i = 0; i < x; i++){
			if (c){
				a.emplace_back(1);
			}else{
				a.emplace_back(0);
			}
			c = !c;
		}
		
		for (int i = 0; i < a.size(); i++)
			cout << a[i];
		cout << "\n";
	}
} 


