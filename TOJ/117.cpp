#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int times, max = 0;
	cin >> times;
	int board[times];
	for (int i = 0; i < times; i++){
		cin >> board[i];
	}
	for (int i = 0; i < times; i++){
		max = max > board[i] ? max : board[i];
	}
	cout << max << "\n";
	return 0;
}
