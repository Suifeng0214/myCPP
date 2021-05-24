#include <iostream>
#include <algorithm>
#include <sstream>
#define int long long
using namespace std;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	string tmp;
	int now=0;
	int ans=0;
	for (int i = 0; i < s.size(); i++){
		if (tmp.size() == 3){
			now++;
			if (now%2==0) reverse(tmp.begin(), tmp.end());
		//	cout << tmp << "@\n";
			stringstream ss(tmp);
			int x;
			ss >> x;
			ans += x;
//			cout << x << "@\n";
			tmp="";
			tmp+=s[i];
		}else{
			tmp += s[i];
		}
	}
	now++;
	if (now%2==0) reverse(tmp.begin(), tmp.end());
	stringstream ss(tmp);
	int x;
	ss >> x;
	ans += x;

	cout << ans%997 << "\n"; 
}
