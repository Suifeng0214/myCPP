#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> sc;
map <int, bool> mp;
signed main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, q;
	cin >> n >> q;
	for (int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		sc.emplace_back(tmp);
	}
	for (int i : sc){
		if (sc.empty()){
			mp[i]=1;
			mp[-i]=1;	
			continue;	
		}
		for (int j : sc){
			mp[i-j]=1;
			mp[i+j]=1;
		}
	}
	for (int i : mp) cout << i << " ";
	
 	return 0;
}


