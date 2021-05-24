#include <bits/stdc++.h>
using namespace std;
#define int long long
#define KK loop%4==
string arr[4];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	arr[0] = "Hi";
	arr[1] = "Hello";
	arr[2] = "How do you do";
	arr[3] = "How are you";
	int loop=0;
	while(getline(cin, s)){
		if (s == "Bye"){
			cout << "Bye\n";
			return 0;
		}
		bool sry=0;
		for (int i = 0; i < 4; i++){
			if (s != arr[i]){
				if (i==3){
				cout << "Sorry\n";
				loop=0;
				sry=1;
				break;}
			}else{
				break;
			}
		}
		if (sry) continue;
		if (loop%4==0){
			cout << arr[0] << "\n";
		}else if (KK 1){
			cout << arr[1] << "\n";
		}else if (KK 2){
			cout << arr[2] << "\n";
		}else{
			cout << arr[3] << "\n";
		}
		loop++;
	}
}
