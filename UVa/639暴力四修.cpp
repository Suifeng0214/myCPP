//22/06/20 10:38
#include <bits/stdc++.h>
using namespace std;
char mp[10][10];
int n;
signed main(){
	//freopen("out.txt", "w", stdout);
	while(cin >> n&&n){
		int num=0;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cin >> mp[i][j];
			}
		}
		int m=0; //max
		for (int i = 0; i < (1<<(n*n)); i++){ //¨CºØ½L­± 
			bool used_col[4] = {0};
			num++;
			int cnt = 0;
			bool can_put=1;
			for (int j = n*n-1; j >= 0; j--){
				int row = j/n, col = j%n;
				if (mp[row][col] == 'X' || (col==0)){
					can_put = true;
					if (mp[row][col] == 'X')
						used_col[col] = 0;
				}
				if (num<<j & 1 &&
				   (can_put == false || (used_col[col] == 1 ) || (mp[row][col] == 'X' ))){
				   		cnt=0; 
						break;
				   }
				if (num<<j & 1 && can_put == 1){
					can_put = false;
					cnt++;  
					used_col[col] = true;
				}
			}
			m = max(cnt, m);
		}
		cout << m << "\n";
	}
} 

