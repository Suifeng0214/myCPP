//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;
bool check(int n){
	set <int> st;
	int tmp = n;
	while(tmp){
		if (tmp%10 != 0)
			st.insert(tmp%10);
		tmp/=10;
	}
	for (auto i : st){
		if (n%i != 0) return false;
	}
	return true;
}
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
		while(1){
			if (check(n)){
				cout << n << "\n";
				break;
			}else n++;
		}
	}	
} 


