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
		int n, k;
		cin >> n >> k;
		if (k==0){
			for (int i = 1; i <= n; i++){
				cout << i << " ";
			}
			cout << "\n";
			continue;
		}
		stack<int>stk;
		for (int i = n-k+1; i <= n; i++)
			stk.emplace(i);
		int tmp = n-k-(k-1)+1;
		if (k*2+1 <= n){
			if (n > 1)
			for (int i = 2; i <= n-k-(k-1); i++){
				cout << i << " ";
			}
			int ouo = 1;
			while(!stk.empty()){
				if (ouo++&1){
					cout << stk.top() << " ";
				   	stk.pop();
				}else cout << tmp++ << " ";	
			}
			cout << "1\n";
		}else{
			cout << "-1\n";
		}
	}	
} 


