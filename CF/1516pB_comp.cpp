//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
vector <string> a, b;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	freopen("ya.txt", "w", stdout);
	ifstream op;
    string str;
    op.open("out.txt");
    while(!op.eof())
		getline(op, str), a.emplace_back(str);
    op.close();
    op.open("pi.txt");
    while(!op.eof())
		getline(op, str), b.emplace_back(str);
    op.close();
	/*
	for (int i = 0; i < a.size(); i++){
		if (a[i] != b[i]){
			cout << "Line: " << i+1 << "\tmain: " << a[i] << "\t" << "pi: " << b[i] << "\n";
		}
	}*/
	vector <int> lines;
	for (int i = 0; i < a.size(); i++){
		if (a[i] != b[i]){
			lines.emplace_back(i+1);
		}
	}
	op.open("in.txt");
	int i = 1, now = 0, cnt =0;
	cout << "180\n";
	while(!op.eof()){
		string tmp;
		getline(op, tmp);
		if (lines[now]*2+1 == i){
			cout << "4\n";
			cout << tmp << "\n";
//			cnt++;
			now++;
		}
		i++;
	}
//	cout << cnt << endl;
    return 0;
}
