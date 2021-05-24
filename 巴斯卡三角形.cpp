#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
	int i, j, k, floor;
	cout << "Input the floor you want to build" << endl;
	cin >> floor;
	int tri[floor][floor] = {0};
	
	for (i = 0; i < floor; i++){
		tri[i][0] = 1;
		if (i > 0){
			tri[i][i] = 1;
		}
	} 
	
	for (i = 2; i < floor; i++){
		for (j = 1; j < i; j++){
			tri[i][j] = tri[i-1][j-1] + tri[i-1][j];
		}
	}
	
	for (i = 0; i < floor; i++){
		for (j = floor; j > i; j--){
			cout << "   ";
		} 
		for(k = 0; k < (j+1); k++){
			printf("%5d ",tri[j][k]);
		}
		cout << endl;
	}
	return 0;
} 
