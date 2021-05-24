#include <bits/stdc++.h>
using namespace std;

int v[1000000][24];
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);	
	int times, i, j, k;
	cin >> times;
	for (i = 0; i < times; i++){
		cin >> v[i][0];
		for (j = 1; j < 1+v[i][0]+1; j++){
			cin >> v[i][j];
		}
		for(j = 0; j < v[i][0]; j++){
			for (k = 1; k < 1+v[i][0]+1; k++){
				v[i][k] = v[i][k+1] - v[i][k];
			}
		}
		cout << v[i][1] << "\n";
	}
}
