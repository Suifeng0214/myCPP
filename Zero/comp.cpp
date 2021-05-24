#include <bits/stdc++.h>
using namespace std;
#define SagiriMywife ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string s[10]={"aaa", "abca", "aaac", "abcc", "aa", "ouo", "xdd", "aaaa", "txt", "oeis"};
signed main(){
	SagiriMywife
	ifstream op;
	vector <string> a, b;
	op.open("out.txt");
	string s;
	while(!op.eof()){
		getline(op, s), a.emplace_back(s);
	}
	op.close();
	op.open("pi.txt");
	while(!op.eof()){
		getline(op, s), b.emplace_back(s);
	}
	for (int i = 0; i < a.size(); i++){
		cout << a[i] << "\t" << b[i] << "\tStatus: ";
		if (a[i] == b[i]){
			cout << "OK\n";
		}else cout << "Error!\n";
	}
	op.close();
}
