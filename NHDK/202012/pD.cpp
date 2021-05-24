#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string name;
	getline(cin, name);
	cout << name << "\n";
	int q;
	cin >> q;

	int TLE;
	cin >> TLE;
	int t=0;
	while(q--){
		t++;
		string a, b;
		cin.ignore();
		getline(cin, a);
		getline(cin, b);
		int time;
		cin >> time;
		cout << "Test " << t << ": ";
		if (time > TLE){
			cout << "Time Limit Exceeded\n";
			continue;
		}
		if (a!=b){
			cout << "Wrong Answer\n";
		}else{
			cout << "Accepted\n";
		}
	}
}
