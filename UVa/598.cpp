#include <bits/stdc++.h>
#define int long long
using namespace std;
vector <string> vec;
vector <string> ans(20);
int k;
void dfs(int n, int ii);
signed main()
{
	//freopen("in.txt","r", stdin);
	//freopen("out.txt","w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	cin.ignore();
	string tmp;
	getline(cin, tmp);
	while(q--){
		vec.clear();
		string input;
		getline(cin, input);
		int start, end;
		int read_k = sscanf(input.c_str(), "%d %d", &start, &end);
		//cout << input << "\n";
		string s;
		while(getline(cin, s)){
			if (s=="")break;
			vec.emplace_back(s);
		}
		if (read_k==0){
			start = 1; end = vec.size();
		}else if (read_k == 1){
			start = start; end = start;
		}
		for (int i = start; i <= end; i++){
				cout << "Size " << i << "\n";	
				k=i;
				dfs(0,-1);
				cout << "\n";
		}
		if (q!=0)
			cout << "\n";
	}
}

void dfs(int n, int ii)
{
	if (n==k){
		for (int i = 0; i < k; i++){
			cout << ans[i];
			if (i!=k-1) cout << ", ";
			else cout << "\n";
		}
		return;
	}
	for (int i = ii+1; i < vec.size(); i++){
		ans[n] = vec[i];
		dfs(n+1, i);
	}
}
