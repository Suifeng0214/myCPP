#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <utility>
using namespace std;

int board[100][7];
vector < pair<int, int> > record;
int main(void)
{
	int subjects, No, a, b, c, d, e, tmp, sum=0;
	cin >> subjects;
	for (int i = 1; i <= subjects; i++){
		cin >> No;
		sum = 0;
		board[No][0] = No;
		for (int j = 1; j <= 5; j++){
			cin >> tmp;
			sum += tmp;
			board[No][j] = tmp;
		}
		board[i][6] = sum;
		record.push_back({board[i][6], board[i][0]});
	}
	/*
	for (int i = 1; i <= 5; i++){
		for (int j = 0; j <= 6; j++){
			cout << board[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
	*/
	sort(record.begin(), record.end());
	for (int i = record.size()-1; i >= 0; i--){
		cout << record[i].second;
		cout << "\n";
	}
} 
