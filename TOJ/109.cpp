#include <iostream>
using namespace std;

int main(void)
{
	int round;
	cin >> round;
	int game[round][2],
		player0=0, player1=0;
	
	for (int i = 0; i < round; i++){
		cin >> game[round][0] >> game[round][1];
		if (game[round][0] == game[round][1]){
		}else if(game[round][0] == 5 && game[round][1] == 0){
			player0 += 1;
		}else if(game[round][0] == 2 && game[round][1] == 5){
			player0 += 1;
		}else if(game[round][0] == 0 && game[round][1] == 2){
			player0 += 1;
		}else{
			player1 += 1;
		}
	}
 
	if (player0 > player1){
		cout << "The prince wins." << endl;
	}else if (player1 > player0){
		cout << "The princess wins." << endl;
	}else{
		cout << "The referee wins." << endl;
	}
	system("pause");
	return 0;
}
