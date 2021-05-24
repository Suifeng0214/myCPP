#include <bits/stdc++.h>
using namespace std;
#define int long long

//set <int> st;
//map <int, int> mp;
string a[25][25];
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	int i = 0;
	int i1=0, i2=0, i3=0, i4=0;
	while(q--){
		string name;
		int aa, bb;
		cin >> name >> aa >> bb;
		if (aa == 1){
			if (bb == 4){
				a[0][i1++] = name;
			}else{
				a[1][i2++] = name;
			}
		}else if (aa == 2){
			if (bb == 3){
				a[2][i3++] = name;
			}else{
				a[3][i4++] = name;
			}
		}
	}
		sort(a[0],a[0]+i1);
		sort(a[1],a[1]+i2);
		sort(a[2],a[2]+i3);
		sort(a[3],a[3]+i4);
		
		for (int i = 0; i < i1; i++){
			cout << a[0][i] << " Military Police\n";
		}
		for (int i = 0; i < i2; i++){
			cout << a[1][i] << " Survey\n";
		}
		for (int i = 0; i < i3; i++){
			cout << a[2][i] << " Garrison\n";
		}
		for (int i = 0; i < i4; i++){
			cout << a[3][i] << " Farmer\n";
		}
} 


