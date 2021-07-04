//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
stack <int> stk;
vector <string> S;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string s, tmp;
	getline(cin, s);
	stringstream ss(s);
	while(ss >> tmp){
		S.emplace_back(tmp);
	}
	for (int i = S.size()-1; i >= 0; i--){
		if (S[i] == "f"){
			int tmp = stk.top() * 2 - 3;
			stk.pop();
			stk.emplace(tmp);
		}else if (S[i] == "g"){
			int x = stk.top();
			stk.pop();
			int y = stk.top();
			stk.pop();
			stk.emplace(2*x+y-7);
		}else if (S[i] == "h"){
			int x = stk.top();
			stk.pop();
			int y = stk.top();
			stk.pop();
			int z = stk.top();
			stk.pop();
			stk.emplace(3*x - 2*y + z);
		}else{
			stk.emplace(stoll(S[i]));
		}
	}
//	cout << stk.size() << "\n";
	cout << stk.top() << "\n";
} 


