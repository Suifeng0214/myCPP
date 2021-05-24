#include <bits/stdc++.h> 
using namespace std;
int board[100][100];
int board2[100][100];
int main(void)
{
	int x, i, j;
	cin >> x;
	for (i = 0; i < x; i++){
		for (j = 0; j < x; j++){
			cin >> board[i][j];
		}
	}
	for (i = 0; i < x; i++){
		for (j = 0; j < x; j++){
			board2[i][j] = board[i][j];
		}
	}
	for (i = 0; i < x; i++){
		sort(board2[i], board2[i]+x);
	}
	for (i = 0; i < x; i++){
		for (j = 0; j < x; j++){
			cout << board[i][j] << " ";
		}
		cout << "\n";
	}
	for (i = 0; i < x; i++){
		for (j = 0; j < x; j++){
			cout << board2[i][j] << " ";
		}
		cout << "\n";
	}
}




