#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	LL t;
	cin >> t;
	while(t--){
		LL a, b, p, sum=0;
		bool flag = 0;
		string s;
		char now, target;
		cin >> a >> b >> p;
		cin >> s;
		target = s[0];
		for (int i = 0; i < s.size()-1; i++){
			if (target == 'A'){
				if (p >= a){
					p -= a;
					sum++; cout << "@1";
					for (int j = i+1; j < s.size()-1; j++){
						if (s[j] == 'B'){
							i = j-1;
							break;
						}
						if (j == s.size()-2){
							flag = 1;
							break;
						}
					}
					if (flag) break;
					target = 'B';
				}else{
					sum += s.size() - i; cout << "@2";
					break;
				}
			}else{
				if (p >= b){
					p -= b;
					sum++; cout << "@3";
					for (int j = i+1; j < s.size()-1; j++){
						if (s[j] == 'A'){
							i = j-1;
							break;;
						} 
						if (j == s.size()-2){
							flag = 1;
							break;
						}
					}
					if (flag) break;
					target = 'A';
				}else{
					sum += s.size() - i; cout << "@4";
					break;
				}
			}
		}
		cout << sum << "\n";

	}
	
} 

