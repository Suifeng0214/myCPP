#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> box;
vector <int> pos;
bool c[1000000];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	box.reserve(1000100);
	pos.reserve(1000100);
	int q, num;
	cin >> q;
	for (int i = 1; i <= q; i++){
		cin >> num;
		box.push_back(num);
		if (num != 0){
			c[num] = 1;
		}
	}
	for (int i = 1; i <= q; i++){
		if (c[i] == 0)
		pos.push_back(i);
	}
	for (int i = 0; i < box.size(); i++){
		if (box[i] == 0){
			box[i] = pos.back();
			pos.pop_back();
		}
	}
	for (int i = 0; i < box.size(); i++){
		cout << box[i] << " ";
	}
	return 0;
} 
