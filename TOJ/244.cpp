#include <bits/stdc++.h>
using namespace std;
int chWords(string words, int chWord);
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string words;
	int chWords;
	cin >> chWords;
	cin >> words;
	for(int i = 0; i < chWords; i++){
		if (words[i] <= 90){
			words[i] += 32;
		}else{
			words[i] -= 32;
		}
	}
	
	cout << words << "\n";
	return 0;
}

