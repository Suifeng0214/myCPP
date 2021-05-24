#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;
//#define int long long
vector <int> sel;
int d=0;
//map <int, int> mp;
bitset <200005> used;
string s;
int now = 0;
int cnt=0, sizes;
bool check=0;
void del(){
	char x = s[now];
	for (int i = now; i < s.size(); i++){
		if (!used[i]){
			x = s[i];
			now = i;
			break;
		}
	}
	for (int i = now; i < s.size(); i++){
		if (used[i]){
			now++;
			continue;
		}
		if (s[i] != x) return;
		now = i+1;
		sizes--;
	}
}
void select(){
	while(d<sel.size() && used[sel[d]]) d++;
	if (d>=sel.size()){
		check=1;
		cnt+=(sizes+1)/2;
		return;
	}
	used[sel[d]] = 1;
	sizes--;
}
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		sel.clear();
		d=0;
		now = 0;
		used.reset();
		int n;
		cin >> n;
		cin >> s;
		cnt=0;
		check=0;
		sizes = s.size();
		for (int i = 0; i < s.size()-1; i++){
			if (s[i] == s[i+1]){
				sel.emplace_back(i);
			}
		}
		while(now < s.size()){
			select();
			if (check) break;
			del();
			//ck();
			cnt++;
		}
		cout << cnt << "\n";
	}	
} 


