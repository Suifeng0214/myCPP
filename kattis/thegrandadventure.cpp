#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;
stack <char> st;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		while(!st.empty()) st.pop();
		string s;
		cin >> s;
		bool flag = 1;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == '.') continue;
			else if (s[i] == 't'){
				while(!st.empty() && st.top() != '|'){
					st.pop();
				}
			   	if (st.empty()){
					flag = 0;
					break;
				}
				if (st.top() == '|')
					st.pop();
			}else if (s[i] == 'j'){
				while(!st.empty() && st.top() != '*'){
					st.pop();
				}
				if (st.empty()){
					flag = 0;
					break;
				}
				if (st.top() == '*')
					st.pop();
							
			}else if (s[i] == 'b'){
				while(!st.empty() && st.top() != '$'){
					st.pop();
				}
				if (st.empty()){
					flag = 0;
					break;
				}
				if (st.top() == '$')
					st.pop();
			}else
				st.emplace(s[i]);
		}
		if (flag && st.empty()){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
} 


