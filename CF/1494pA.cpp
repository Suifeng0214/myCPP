//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
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
		string s;
		cin >> s;
		bool ok = 0;
		stack<char>A;
		int sz=s.size();
		for (int i = 0; i < s.size(); i++){
			if (s[i] == 'A'){
				if (A.empty()) break;
				A.pop();
			}
			else A.emplace('(');
			if (A.empty() && i==sz-1) ok = 1;
		}

		stack<char>B;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == 'B'){
				if (B.empty()) break;
				B.pop();
			}
			else B.emplace('(');
			if (B.empty() && i==sz-1) ok = 1;
		}

		stack<char>C;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == 'C'){
				if (C.empty()) break;
				C.pop();
			}
			else C.emplace('(');
			if (C.empty() && i==sz-1) ok = 1;
		}

//=== double ))
		
		stack<char>AB;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == 'A' || s[i] == 'B'){
				if (AB.empty()) break;
				AB.pop();
			}
			else AB.emplace('(');
			if (AB.empty() && i==sz-1) ok = 1;
		}

		stack<char>AC;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == 'A' || s[i] == 'C'){
				if (AC.empty()) break;
				AC.pop();
			}
			else AC.emplace('(');
			if (AC.empty() && i==sz-1) ok = 1;
		}


		stack<char>BC;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == 'B' || s[i] == 'C'){
				if (BC.empty()) break;
				BC.pop();
			}
			else BC.emplace('(');
			if (BC.empty() && i==sz-1) ok = 1;
		}

		if (ok)cout << "YES\n";
		else cout << "NO\n";
	}	
} 


