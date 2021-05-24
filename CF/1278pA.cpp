#include <bits/stdc++.h>
using namespace std;
int pp[27];
int hh[27];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q, i, j;
	bool flag;
	string p, hash;
	cin >> q;
	while(q--){
		flag = 0;
		cin >> p >> hash;
		if(p.size() > hash.size()){
			cout << "NO\n";
			continue;
		}
			
		for (int i = 0; i < 27; i++){
			pp[i] = 0;
			hh[i] = 0;
		}
		for (int i = 0; i < p.size(); i++){
			pp[p[i] - 'a']++;
		}
		for (int i = 0; i < hash.size()-p.size()+1; i++){
			for (int j = 0; j < 27; j++){
				hh[j] = 0;
			}
			for (int j = i; j < i+p.size(); j++){
				hh[hash[j] - 'a']++;
			}
			for (int j = 0; j < 27; j++){
				if (hh[j] != pp[j]){
					break;
				}
				if (j == 26){
					flag = 1;
				}
			}
			if (flag){
				break;
			}
		}
		if (flag){
			cout << "YES\n"; 
		}else{
			cout << "NO\n";
		}
	}
    return 0;
}


