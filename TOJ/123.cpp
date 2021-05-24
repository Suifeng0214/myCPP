#include <bits/stdc++.h>
using namespace std;
string door1, door2;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int length;
	bool flag = 0;
	unsigned long long int pm;
	cin >> length >> door1 >> door2;
	for (int i = 0; i < length-1; i++){
		if(door2[i] == door1[i+1] && door2[i] == '0'){
			flag = 1;
			break;
		}else if (door1[i] == door2[i+1] && door1[i] == '0'){
			flag = 1;
			break;
		}
	}
	if (flag == 1){
		cout << "FENESTRATION FORTIFICATION FAILURE!\n";
	}else{
		cout << "FENDED OFF!\n";
	}
	
	return 0;
}
