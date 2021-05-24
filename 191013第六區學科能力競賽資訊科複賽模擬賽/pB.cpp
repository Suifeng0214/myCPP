#include <bits/stdc++.h>
using namespace std;
int board[11][11];
bool check[11][11];
int tmpI, tmpJ, n, i, j, times=0, countt=1;
void checked(void);
void record(void);
int main()
{
	ios::sync_with_stdio(0);
	board[0][0] = 1;
	check[0][0] = 1;
	cin >> n;
	if (n==1){
		cout << 1 << " \n";
		return 0;
	}
	
	for (;;){
		if((i+1) <= (n-1) && (j-1) >= 0 && check[i+1][j-1] == 0){
			i++;
			j--;
			record();
		}else{
			checked();
			i = tmpI;
			j = tmpJ;
			record();
		}
		if (times >= n*n-1){
			break;
		}
	}
	for (int ii = 0; ii < n; ii++){
		for (int jj = 0; jj < n; jj++){
			cout << board[ii][jj] << " ";
		}
		cout << "\n";
	}
}
void checked(void)
{
	for (int aa = 0; aa < n; aa++){
		for (int bb = 0; bb < n; bb++){
			if (check[aa][bb] == 0){
				tmpI = aa;
				tmpJ = bb;
				return ;
			}
		}
	}
}
void record(void)
{
	countt++;
	board[i][j] = countt;
	check[i][j] = 1;
	times++;
}
 
