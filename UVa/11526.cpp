//Author: Suifeng0214
#include <bits/stdc++.h>
#define int long long
using namespace std;
int H(int n){
	int ans = 0;
	for (int i = 1; i <= n; i++){
		int tmp = n/i;
		int tmp2 = n/tmp;
		if (i == tmp2){
			ans += tmp;
		//	cout << tmp << " "; 
		}else{
			ans += (tmp2-i+1)*tmp;
		//	cout << (tmp2-tmp+1)*tmp << " ";
			i = tmp2;
		}
	}
	return ans;
}
signed main()
{
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		cout << H(n) << "\n";
	}
} 
