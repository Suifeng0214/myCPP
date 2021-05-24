//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
int MP[510][510];
int dx[] = {-1, 0, 1, 0}, dy[] = {0, -1, 0, 1};
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	vector <pair<int, int> > a;
	for (int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		a.emplace_back(tmp, 1);
	}
	for (int i = 1; i <= n; i++){
		MP[i][i] = a[i-1].F; 
	}
	int x=1, y=1;
	for (int i = 0; i < n; i++){
		while(a[i].S != a[i].F){
			bool no=0;
			for (int j = 0; j < 4; j++){
				int nx = x+dx[j], ny = y+dy[j];
//				cout << nx << "@" << ny << "\n";
				if (!(1<=nx&&nx<=n && 1<=ny&&ny<=n)) continue;
				if (MP[nx][ny] == 0 && nx-ny>0){
					MP[nx][ny] = a[i].F;
					a[i].S++;
					x=nx, y=ny;
					break;
				}
				if (j==3) no=1;
			}
			if (no) break;
		}
		x=i+2, y=i+2;
	}
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++){
			cout << MP[i][j] << " ";
		}
		cout << "\n";
	}
} 


