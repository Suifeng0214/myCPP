#include <bits/stdc++.h>
using namespace std;
#define int long long
int sum(int i){
	int ret=0;
	while(i){
		ret += i%10;
		i/=10;
	}
	return ret;
}

bool uniq(int i){
	set <int> st;
	while(i){
		if (st.count(i%10)){
			return 0;
		}else{
			st.insert(i%10);
		}
		i/=10;
	}
	return 1;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		if (n < 10){
			cout << n << "\n";
		}else if (n > 45){
			cout << -1 << "\n";
		}else if (n==45){
			cout << 123456789 << "\n";
		}else if (n==44){
			cout << 23456789 << "\n";
		}else if (n==43){
			cout << 13456789 << "\n";
		}else{
			for (int i = 10; i <= 123456789; i++){
				if (sum(i) == n && uniq(i)){
					cout << i << "\n";
					break;
				}
			}
		}
	}
}
