#include <iostream>
using namespace std;

int main(void)
{
	int i, j,
		flag=0, board[5][6];
	
	for (i = 0; i < 5; i++){
		for (j = 0; j < 6; j++)
		cin >> board[i][j];
	}
	
	for(i = 0; i < 5; i++){ //檢查橫消 
		for (j = 0; j < 4; j++){
			if (board[i][j] == board[i][j+1] && board[i][j+1] == board[i][j+2]){
				flag = 1;
			}
		}
	}
	for(i = 0; i < 6; i++){ //檢查直消 
		for (j = 0; j < 3; j++){
			if (board[j][i] == board[j+1][i] && board[j+1][i] == board[j+2][i]){
				flag = 1;
			}
		}
	}
	if (flag == 1){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl; 
	}
	return 0;
}
