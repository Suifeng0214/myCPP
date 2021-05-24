#include <bits/stdc++.h>
using namespace std;
#define int long long
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a, b;
	cin >> a >> b;
	string aa, bb;
	while(a>0 || b>0){
		int x = a%10;
		int y = b%10;
		if (x > y){
			aa += (x+'0');
		}else if (x==y){
			aa += (x+'0');
			bb += (y+'0');
		}else{
			bb += (y+'0');
		}
		a/=10;
		b/=10;
	}
	int x, y;
	if (aa.empty()) cout << "YODA\n";
	else{
		reverse(aa.begin(), aa.end());
		stringstream ss1(aa);
		ss1 >> x;
		cout << x << "\n";
	}
	if (bb.empty()) cout << "YODA\n";
	else{
		reverse(bb.begin(), bb.end());
		stringstream ss2(bb);
		ss2 >> y;
		cout << y << "\n";
	}
} 


