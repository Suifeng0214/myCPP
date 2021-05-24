//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
int poww(int a, int b){
	int ret = 1;
	for (;b; b>>=1){
		if (b&1) ret*=a;
		a*=a;
	}
	return ret;
}
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int a, b, c;
		cin >> a >> b >> c;
		/*
		bool flag = 0;
		for (int i = 1*poww(10, a-1); i < 1*poww(10, a); i++){
			for (int j = 1*poww(10,b-1); j < 1*poww(10, b); j++){
				if ((int)log10(__gcd(i, j)) + 1 == c){
		string A="1", B="1";
		for (int i = 0; i < a-1; i++){
			A+='0';
		}
		for (int i = 0; i < b-1; i++)
			B+='0';
		if (min(a, b) != c){
			if (a >= b){
				A[A.size()-c] = '1';
			}else{
				B[B.size()-c] = '1';
			}
		}
					cout << i << " " << j << "\n";
					cout << A << " " << B << "\n";
					if (stoll(A) != i || stoll(B) != j){
						cout << "NO!!\n";
					}
					flag = 1;
				}
				if (flag) break;
			}
			if (flag) break;
		}*/
		
		string A="1", B="1";
		for (int i = 0; i < a-1; i++){
			A+='0';
		}
		for (int i = 0; i < b-1; i++)
			B+='0';
		if (min(a, b) != c){
			if (a >= b){
				A[A.size()-c] = '1';
			}else{
				B[B.size()-c] = '1';
			}
		}
		cout << A << " " << B << "\n";
		
	}	
} 


