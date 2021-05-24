//Author: Suifeng0214
#include <bits/stdc++.h>
using namespace std;
stack <char> st;
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	cin.ignore();
	while(q--){
		while(!st.empty())
			st.pop();
		string s, ns;
		getline(cin, s);
		int l=0;
		bool lck=0;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == '(')l++;
			if (s[i] == ')')l--;
			if (l<0){
				lck=1;
				break;
			}
		}
		if (l>0) lck=1;
		if (lck){
			cout << "false\n";
			continue;
		}
		ns+='@';
		for (int i = 0; i < s.size(); i++){
			if (s[i] == '(' || s[i] == ')' || s[i] == ' ')continue;
			ns+=s[i];
		}
		ns+='@';
		bool ans = true;
		int cnt = 0;
		for (int i = 0; i < ns.size(); i++){
			if (ns[i] == '+' || ns[i] == '-' || ns[i] == '*' || ns[i] == '/'){
				cnt++;
				if ('0' <= ns[i-1] && ns[i-1] <= '9' && ('0' <= ns[i+1] && ns[i+1] <= '9' ));
				else ans = 0;
			}
		}
		if (cnt == 0) ans = 0;
		if (ans){
			cout << "true\n";
		}else{
			cout << "false\n";
		}
	}
} 
