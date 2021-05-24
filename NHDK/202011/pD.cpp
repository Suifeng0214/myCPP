//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >>n;
	if (n%2==0 && n%11==0 && n%5!=0 && n%7!=0){
		cout << "Yes\n";	
	}else cout << "No\n";
} 


