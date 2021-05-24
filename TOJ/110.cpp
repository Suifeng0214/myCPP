#include <iostream>
using namespace std;

int main(void)
{
	int layers, i, j, TRIlayer, temp=0;
	cin >> layers;
	int star[layers];
		
	for (i = 0; i < layers; i++){
		cin >> star[i];
	}
	
	for (i = 0; i < layers; i++){
		//smallTRI  TOP
		//star[i]-3 = TRIlayer.sum
		for (TRIlayer = 0; TRIlayer < star[i]-3; TRIlayer++){
			for (j = star[i]-1; j > TRIlayer; j--){ // first space
				cout << " ";
			}
			for (j = 0; j < 2*(TRIlayer)+1 ; j++){
				cout << "*";
			}
			cout << endl;

		}
		
		for (j = 0; j < 2*star[i]-1; j++){
			cout << "*";
		}
		cout << endl;//**********************
		for (j = 0; j < star[i]+star[i]-3; j++){
			if (j == 0){
				cout << " *";
			}else{
				cout << "*"; 
			}
		}
		cout << endl;//**********************
		for (j = 0; j < 2*star[i]-1; j++){
			cout << "*";
		}
		cout << endl;//**********************
		
		//smallTRI  BOT
		int temp2 = 0;
		temp = star[i]-3;
		for (TRIlayer = 0; TRIlayer < star[i]-3; TRIlayer++){
			for (j = temp; j <= star[i]-1; j++){ // first space
				cout << " ";
			}
			for (j = 2*(star[i]-3)-1; j > temp2; j--){
				cout << "*";
			}
			temp--;
			temp2+=2;
			cout << endl;
		}
	}
	
	system("pause");
	return 0;
}
