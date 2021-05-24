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
	bool x1, x2, x3;
	cin >> x1 >> x2 >> x3;
	char a, b, c;
	cin >> a >> b >> c;
	if (a=='N'){
		x1 = !x1;
	}

	if (b=='A'){
		x2 = (x2&x1);
	}else if (b=='O'){
		x2 = (x2|x1);
	}
	
	if (c=='A'){
		x3 = (x3&x2);
	}else if (c=='O'){
		x3 = (x3|x2);
	}
	cout << x1 <<" "<< x2 << " "<< x3 << "\n";
} 


