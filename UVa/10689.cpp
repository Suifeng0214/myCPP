//Author: Suifeng0214
#include <bits/stdc++.h>
#define int long long
using namespace std;
int a, b, c, d, mod;
int ori[3][3];
int arr[3][3];
int tmp[3][3];
int tmp2[3][3];
void init(){
	ori[0][0]= 1, ori[0][1]= 0;
	ori[1][0]= 0, ori[1][1]= 1;

	arr[0][0]= 1, arr[0][1]= 1;
	arr[1][0]= 1, arr[1][1]= 0;
}
void go(int oper){ // a*b
	if (oper==1)
	for (int i = 0; i < 2; i++){ //a
		for (int j = 0; j < 2; j++){ //b
			tmp[i][j] = 0;
			for (int k = 0; k < 2; k++){ //b
				tmp[i][j] += arr[i][k]*arr[k][j];
				tmp[i][j] %= mod;
			}
			tmp[i][j] %= mod;
		}
	}

	if (oper==2)
	for (int i = 0; i < 2; i++){ //a
		for (int j = 0; j < 2; j++){ //b
				tmp2[i][j] = 0;
				for (int k = 0; k < 2; k++){
					tmp2[i][j] += arr[i][k]*ori[k][j];
					tmp2[i][j] %= mod;
				}
				tmp2[i][j] %= mod;
		}
	}
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			if (oper==1)
				arr[i][j] = tmp[i][j];
			if (oper==2)
				ori[i][j] = tmp2[i][j];
		}
	}
}

void f(int b){
//	int ans = 1;
	for (;b>0;b/=2){
		if(b&1) go(2);//ans*=a;
		go(1);//a*=a;
	}
	return;
}

int poww(int a, int b){
	int ans = 1;
	for (;b>0;b/=2){
		if (b&1) ans*=a;
		a*=a;
	}
	return ans;
}
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		cin >> a >> b >> c >> d;
		mod = poww(10, d);
		init();
		f(c);
		int ans = ((b * ori[1][0])%mod + (a*ori[1][1])%mod)%mod;
		cout << ans << "\n";
	}
}
