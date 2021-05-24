#include <bits/stdc++.h>
using namespace std;
int a[100][100];
int b[100][100];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int r, c;
	cin >> r >> c;
	for (int i = 1; i <= r; i++){
		for (int j = 1; j <= c; j++){
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= r; i++){
		for (int j = 1; j <= c; j++){
			cin >> b[i][j];
		}
	}
	bool flag = 1;
	for (int i = 1; i <= r; i++){
		for (int j = 1; j <= c; j++){
			if (a[i][j] < b[i][j]){
				if (a[i][j] > a[i-1][j] && a[i][j] > a[i][j-1]){
					if (b[i][j] > a[i-1][j] && b[i][j] > a[i][j-1]){
						swap(a[i][j], b[i][j]);
					}
				}else{
					if (b[i][j] > a[i-1][j] && b[i][j] > a[i][j-1]){
						swap(a[i][j], b[i][j]);
					}else{
						flag = 0;
						break;
					}
				}
			}else{
				if (b[i][j] > a[i-1][j] && b[i][j] > a[i][j-1]){
					swap(a[i][j], b[i][j]);
				}
			}
		}
		if (!flag){
			break;
		}
	}
	
	for (int i = 1; i <= r; i++){
		for (int j = 1; j <= c; j++){
			if (b[i][j] > b[i-1][j] && b[i][j] > b[i][j-1]){
				continue;
			}else{
				flag = 0;
				break;
			}
		}
		if (!flag) break;
	}
	if (flag){
		cout << "Possible\n";
	}else{
		cout << "Impossible\n";
	}
}
