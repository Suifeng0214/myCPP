#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	if (n & 1){
		cout << -1;
		return 0;
	}
	string s;
	int L=0, R=0, ans=0; // l .. (
						//  R ..  )
	cin >> s;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == '('){ 
			L++;
			//cout << 'L';
			if (L == R){
				ans+= L + R;
				L=0; R=0;
			}
		}else{
			R++;
			//cout << 'R';
			if (L >= R){ //  (()
				L -= R;
				R = 0;
			}
		}
	}
	if (L==0 && R==0)
		cout << ans;
	else
		cout << -1;
}


