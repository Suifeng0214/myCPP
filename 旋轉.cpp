#include <iostream>
using namespace std;

int main(void)
{
	int R, C, M,
		i, j, temp = 1,
		times,
		rotate = 0;
	cin >> R >> C >> M;
	int B[R][C];
	int tempB[R][C];
	int Rotate[C][R];
	
//input && copy 'B' array to 'tempB' array
	for (i = 0; i < R; i++){
		for (j = 0 ; j < C; j++){
			cin >> B[i][j]; 
			tempB[i][j] = B[i][j];
		}
	}

//Operate
	for (times = 0; times < M; times++){
		if (rotate % 2 == 0){
			rotate++;
			for (i = 0; i < C; i++){
				for (j = 0; j < R; j++){
					Rotate[i][j] = tempB[j][C-1-i]; //
				}
			}
			for (i = 0; i < C; i++){
				for (j = 0 ; j < R; j++){
					tempB[i][j] = B[i][j];  // update tempB
				}
			}
		}else{
			rotate++;
			for (i = 0; i < R; i++){
				for (j = 0; j < C; j++){
					B[i][j] = Rotate[j][R-1-i]; //
				}
			}
			for (i = 0; i < R; i++){
				for (j = 0 ; j < C; j++){
					tempB[i][j] = B[i][j];  // update tempB
				}
			}
		}
	}
////
	cout << endl << "Consequence: " << endl;
	
//Output
	if (rotate % 2 == 0){
		for (i = 0; i < R; i++){
			for (j = 0 ; j < C; j++){
				cout << B[i][j] << " "; 
			}
			cout << endl;	
		}
	}else{
		for (i = 0; i < C; i++){
			for (j = 0 ; j < R; j++){
				cout << Rotate[i][j] << " "; 
			}
			cout << endl;	
		}
	}
}


