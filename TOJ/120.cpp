#include <bits/stdc++.h>
using namespace std;
long long treesArr[200010];
long long treeStars[200010];
long long client[200010][2];
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long trees, i, j, x, y, temp;
	cin >> trees;
	for (i = 0; i < trees; i++){
		cin >> treesArr[i];
	}
	
	treeStars[0] = treesArr[0];
	for (i=1; i<trees; i++){
		treeStars[i] = treesArr[i] + treeStars[i-1];
	}
	int clients;
	cin >> clients;
	for(i = 0; i < clients; i++){
		for (j = 0; j < 2; j++){
			cin >> client[i][j];	
		}
	}
	
	for(i = 0; i < clients; i++){
		x = client[i][1] > client[i][0] ? client[i][1] : client[i][0]; 
		y = client[i][1] == x ? client[i][0]:client[i][1];
		if (y==1){
			cout << treeStars[x-1] - 0 << "\n";
		}else{
			cout << treeStars[x-1] - treeStars[y-2] << "\n";
		}
		
		//cout << x << " " << y << "\n";
		
	}
	return 0;
}
