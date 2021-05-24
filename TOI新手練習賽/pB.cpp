#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, tmp=0, sum=0;
	cin >> a >> b;
	bool Map[a][b];
	bool np[a][b];
	int convert[a][b];
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cin >> Map[i][j];
			np[i][j] = Map[i][j];
		}
	}
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cin >> convert[i][j];
		}
	}
	
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			sum = 0;
			for (int k = 0; k < a; k++){
				sum += convert[k][j];
			}
			for (int k = 0; k < b; k++){
				sum += convert[i][k];
			}
			sum -= convert[i][j];
			if (sum%2 == 1){
				np[i][j] = !Map[i][j];
			}
		}
	}
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cout << np[i][j];
		}
		cout << "\n";
	}
}
