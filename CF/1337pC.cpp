#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a[200010];
vector <int> b;
//bool used[200010];
//set <int> st;
//map <int, int> mp;
int dfs(int now, int counts, int last);
signed main() 
{ 
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, k;
	cin >> n >> k;
	if (n==2){
		cout << 1;
		return 0;
	}
	n--;
	while(n--){
		int top, down;
		cin >> top >> down;
		a[top].emplace_back(down);
		a[down].emplace_back(top);
	}
	//used[1] = 1;
	n = dfs(1, 0, -1);
	sort(b.begin(), b.end());
	/*for (int i = 0; i < b.size(); i++){
		cout << b[i] << " ";
	}
	cout << "@\n";*/
	int ans = 0;
	for (int i = (int)b.size()-1; i >= (int)b.size()-k; i--){
		ans += b[i];
	}
	cout << ans;
} 
int dfs(int now, int counts, int last)
{
	//cout << "@@@ " <<now << " " << counts << "\n";
	//used[now] = 1;
	if (a[now].size() == 1 && now != 1){
		//bot.emplace_back(now);
		b.emplace_back(counts);
		//cout << "·F " << now << "\n";
		return 1;
	}
	counts++;
	int parents=0;
	for (int i = 0; i < a[now].size(); i++){
		//if (used[a[now][i]] == 0){
			//used[a[now][i]] = 1;
		if (a[now][i] != last)	
			parents += dfs(a[now][i], counts, now);
		//}
	}
	counts--;
	//cout << "@@P " <<now << " " << counts << " " << parents << "\n";
	if (now != 1)
		b.emplace_back(counts - parents);
	return parents+1;
}


