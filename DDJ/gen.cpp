//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define F first
#define S second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
int tmp[100];
signed main() 
{ 
//	freopen("in.txt", "r", stdin);
	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	srand(clock());
	int q = 10;
	while(q--){
		int t = 10;
		cout << t << "\n";
		for (int i = 0; i < t; i++){
			tmp[i] = rand()%(10-1+1)+1;
			cout << tmp[i] << " \n"[i==t-1];
		}
		srand(clock());
		for (int i = 0; i < t; i++){
			int a = rand()%(11)+tmp[i];
			cout << a << " \n"[i==t-1];
		}
	}
}
