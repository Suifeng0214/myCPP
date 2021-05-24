//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
set <string> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	bool flag = 1;
	while(n--){
		string tmp;
		cin >> tmp;
		if (!st.count(tmp)){
			st.insert(tmp);
		}else{
			flag = 0;
		}
	}
	
	if (flag) cout <<"Yes\n";
	else cout << "No\n";

} 


