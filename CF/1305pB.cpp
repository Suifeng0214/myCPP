#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	vector <int> a;
	getline(cin, s);
	int L = 0, R = s.size()-1;
	bool ck=0, k=0;
	while(L != R){
		if (ck){
			if (s[R] == ')'){
				a.emplace_back(L+1);
				a.emplace_back(R+1);
				k=1;
				ck=0;
				if (R-1 == L) break;
				R--;
				L++;
			}else{
				R--;
			}
		}else{
			if(s[L] == '('){
				ck=1;
			}else{
				L++;
			}
		}
		
	}
	sort(a.begin(), a.end());
	cout << k << "\n";
	if (k){
		cout << a.size() << "\n"; 
		for (int i = 0; i < a.size(); i++){
			if (i == a.size()-1)
				cout << a[i];
			else
				cout << a[i] << " ";
		}
	}
		
	
} 

