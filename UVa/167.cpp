//25/06/20 00:25
#include <bits/stdc++.h>
#define int long long
using namespace std;
bool col[10];
bool pluss[100];
bool minuss[100];
int mp[10][10];
void dfs(int row);
int tmp=0, ans=0;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int q;
	cin >> q;
	while(q--){
		ans=0; tmp=0;
		memset(col, 0, sizeof(col));
		memset(pluss, 0, sizeof(pluss));
		memset(minuss, 0, sizeof(minuss));
		for (int i = 0; i < 8; i++){
			for (int j = 0; j < 8; j++){
				cin >> mp[i][j];
			}
		}
		
		dfs(0);
		cout << setw(5) <<ans << "\n";
	}
}

void dfs(int row)
{
	if (row == 8){
		ans = max(tmp, ans);
		return;
	}
	
	for (int i = 0; i < 8; i++){
		if (col[i] == 1) continue;
		if (pluss[row+i] == 1) continue;
		if (minuss[8+row-i] == 1) continue;
		
		col[i] = 1;
		pluss[row+i] = 1;
		minuss[8+row-i] = 1;
		tmp+=mp[row][i];
		dfs(row+1);
		tmp-=mp[row][i];
		col[i] = 0;
		pluss[row+i] = 0;
		minuss[8+row-i] = 0;
	}
}


