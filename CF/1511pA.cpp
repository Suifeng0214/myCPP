//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		int a= 0, b= 0, ma=-1, mb=-1;
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			if (tmp == 1)
				a++;
			else if (tmp == 2)
				b++;
			else {
				a++;
			}
		}
		cout << a << "\n";
	}	
} 


