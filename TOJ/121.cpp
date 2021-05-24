#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int times, i , j, tmp;
	cin >> times;
	tmp = times;
	for (i = 0; i < times; i++){
		for(j = 0; j < i; j++){
			cout << " ";
		}
		for(j = tmp*2-1; j > 0; j--){
			cout << (char)('A' + tmp - 1);
		}
		tmp--;
		cout << "\n";
	}
	
	return 0;
}
