#include <bits/stdc++.h>
using namespace std;
#define int long long
int sum[27];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int M1=-1,M2=-1, oo;
	char c;
	while(cin >> c){
		sum[c-'a']++; 
	}
	for (int i=0; i < 27; i++){
		oo = (sum[i] > M1)? i : oo;
		M1 = max(sum[i], M1); 
	}
	for (int i=0; i < 27; i++){
		if (i == oo) continue;
		M2 = max(sum[i], M2); 
	}
	if (M2 == 0){
		cout << M1;
	}else{
		cout << M1*M2;
	}
} 


