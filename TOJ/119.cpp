#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
	int files, temp, i, j, flag=0;
	cin >> files;
	int cabinet[files];
	for (i = 0; i < files; i++){
		cin >> cabinet[i];
	}

	int commandTimes;
	cin >> commandTimes;
	int commands[commandTimes][2];
	for (i = 0; i < commandTimes; i++){
		for (j = 0; j < 2; j++){
			cin >> commands[i][j];
		}
		if (commands[i][0] > commands[i][1]){
			temp = commands[i][0];
			commands[i][0] = commands[i][1];
			commands[i][1] = temp;
		}
	}
	
	for (i = 0; i < commandTimes; i++){
        if (flag == 0 && commands[i][1] - commands[i][0] >= 9){ //or >8
            flag = 1;
            break;
        }else{
        	temp = cabinet[commands[i][0]-1];
            cabinet[commands[i][0]-1] = cabinet[commands[i][1]-1];
            cabinet[commands[i][1]-1] = temp;
		}
	}
	if (flag == 0){
		cout << "SORTED!" << endl;
		for (i = 0; i < files; i++){
			if (i == files-1){
			cout << cabinet[i] << endl;	
			}else{
			cout << cabinet[i] << " ";
			}
		} 
	}else{
		cout << "I QUIT!" << endl;
		for (i = 0; i < files; i++){
			if (i == files-1){
			cout << cabinet[i] << endl;	
			}else{
			cout << cabinet[i] << " ";
			}
		}
	}
	return 0;
}
