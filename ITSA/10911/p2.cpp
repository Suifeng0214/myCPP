#include <bits/stdc++.h>
using namespace std;
#define int long long
string a[] = {"C","C#","D","D#","E","F","F#","G","G#","A","A#","B"};
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		string input;
		cin >> input;
		int now;
		int size = 12;
		int last = input.size()-1;
		for (int i = 0; i < size; i++){
			if (input[last] == 'm' && input == a[i]+'m'){
				now = i;
				break;
			}else if (input == a[i]){
				now = i;
				break;
			}
		}
		if (input[last] != 'm'){
			cout << a[now] << " " << a[(now+4) % size] << " " << a[(now+7) % size] << "\n"; 
		}else{
			cout << a[now] << " " << a[(now+3) % size] << " " << a[(now+7) % size] << "\n"; 
		}
	}
}
