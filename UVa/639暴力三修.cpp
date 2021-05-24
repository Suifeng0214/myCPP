//22/06/20 10:38
#include <bits/stdc++.h>
using namespace std;
char mp[10][10];
string num="0000000000000000";
int n;
void add();
void print_num(int n);
signed main(){
	//freopen("out.txt", "w", stdout);
	while(cin >> n&&n){
		num="0000000000000000";
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cin >> mp[i][j];
			}
		}
		int m=0; //max
		for (int i = 0; i < (int)pow(2, n*n)-1; i++){ //¨CºØ½L­± 
			bool used_col[4] = {0};
			add();
			int cnt = 0;
			bool can_put=1;
			for (int j = 0; j < n*n; j++){
				int row = j/n, col = j%n;
				if (mp[row][col] == 'X' || (col==0)){
					can_put = true;
					if (mp[row][col] == 'X')
						used_col[col] = 0;
				}
				if (num[j] == '1' &&
				   (can_put == false || (used_col[col] == 1 ) || (mp[row][col] == 'X' ))){
				   		cnt=0; 
						break;
				   }
				if (num[j] == '1' && can_put == 1){
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

void add()
{
	if (num[0] == '0'){
		num[0] = '1';
	}else{
		for (int i = 0; i < 16; i++){
			if (num[i] == '0'){
				num[i] = '1';
				break;
			}else{
				num[i] = '0';
			}
		}
	}
}

void print_num(int n) //for debug 
{
	for (int i = 0; i < n; i++){
		cout << num[i];
	}
	cout << "\n";
}
