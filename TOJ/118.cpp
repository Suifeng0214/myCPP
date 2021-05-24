#include <iostream>
using namespace std;

int main(void)
{
	int maxFruit, money, i, j;
	cin >> maxFruit; 
	int perSaleArr[maxFruit][2];
	for (i = 0; i < maxFruit; i++){
		for(j = 0; j < 2; j++){
			cin >> perSaleArr[i][j];
		}
	} 
	
	int tradeTimes;
	cin >> tradeTimes;
	int Sum[tradeTimes][2];
	for (i = 0; i < tradeTimes; i++){
		for(j = 0; j < 2; j++){
			cin >> Sum[i][j];
		}
	} 
	
	for (i = 0; i < tradeTimes; i++){
		for (j = 0; j < maxFruit; j++){
			if (perSaleArr[j][0] == Sum[i][0]){
				if (Sum[i][1] == Sum[i][0] * perSaleArr[j][1]){
					cout << "The shopkeeper is honest." << endl; 
				}else{
					money = Sum[i][1] - Sum[i][0] * perSaleArr[j][1];
					cout << money << endl;
				}
			}else{
				continue;
			}
		} 
	}
	return 0;
}
