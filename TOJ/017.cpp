#include <bits/stdc++.h>
using namespace std;

void top(int P);
void mid(int P);
void bot(int P);

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int P;
	while(cin >> P){
		top(P);
		mid(P);
		cout << "\n";
		bot(P);
	}
	return 0;
}

void top(int P)
{
	int i, j;
	for (i = 0; i < P-1; i++){
		for (j = P-i-1; j > 0; j--){
			cout << " ";
		}
		mid(i+1);
		cout << "\n";
	}	
}

void mid(int P)
{
	int i, j;
	for (i = 65; i < 65+P; i++){
			cout << (char)i ;
		}
	for (i =65+P-2; i >= 65; i--){
		cout << (char)i ;
	}
}

void bot(int P)
{
	int i, j;
	for (i = 0; i < P-1; i++){
		for (j = 0; j < i+1; j++){
			cout << " ";
		}
		mid(P-1-i);
		cout << "\n";
	}	
}
