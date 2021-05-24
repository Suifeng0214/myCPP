#include <iostream>
using namespace std;

int main(void)
{
	int R, C, M,
		i, j,
		rotate = 0 ;
	cin >> R >> C >> M;
	int operTimes[M];
	int B[R][C];
	int tempB[R][C];
	int Rotate[C][R];
	int tempRotate[C][R];
	
//input && copy 'B' array to 'tempB' array
	for (i = 0; i < R; i++){
		for (j = 0 ; j < C; j++){
			cin >> B[i][j]; 
			tempB[i][j] = B[i][j];
		}
	}
//input operation commands
	for (i = 0; i < M; i++){
		cin >> operTimes[i];
	}

//Operate
	for (int num = M-1; num >=0; num--){
	// flip //
		if (operTimes[num] == 1){
			if (rotate % 2 == 0){
				for (i = 0; i < R; i++){
					for (j = 0 ; j < C; j++){
						B[i][j] = tempB[R-1-i][j]; //flip 
					}
				}
				for (i = 0; i < R; i++){
					for (j = 0 ; j < C; j++){
						tempB[i][j] = B[i][j];  // update tempB
					}
				}
			}else{
				for (i = 0; i < C; i++){
					for (j = 0 ; j < R; j++){
						Rotate[i][j] = tempRotate[C-1-i][j]; //flip 
					}
				}
				for (i = 0; i < C; i++){
					for (j = 0 ; j < R; j++){
						tempRotate[i][j] = Rotate[i][j];  // update tempRotate
					}
				}
			}
		}
		if (operTimes[num] == 0){
			if (rotate % 2 == 0){
				for (i = 0; i < C; i++){
					for (j = 0; j < R; j++){
						Rotate[i][j] = tempB[j][C-1-i]; //rotate
					}
				}
				for (i = 0; i < C; i++){
					for (j = 0 ; j < R; j++){
						tempRotate[i][j] = Rotate[i][j];  // update tempRotate
					}
				}
			}else{
				for (i = 0; i < R; i++){
					for (j = 0; j < C; j++){
						B[i][j] = tempRotate[j][R-1-i];
						tempB[i][j] = B[i][j];
					}
				}
			
			}
			rotate++;
		} 
	}
		
//Output
	if (rotate % 2 == 0){
		cout << R << " " << C << endl; 
		for (i = 0; i < R; i++){
			for (j = 0 ; j < C; j++){
				cout << B[i][j] << " "; 
			}
			cout << endl;	
		}
	}else{
		cout << C << " " << R << endl; 
		for (i = 0; i < C; i++){
			for (j = 0 ; j < R; j++){
				cout << Rotate[i][j] << " ";
			}
			cout << endl;
		}
	}	
}


