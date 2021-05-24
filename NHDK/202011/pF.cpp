//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;
bool a[100];
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;	
	int x;
	while(cin >> x){
		a[x]=1;
	}
	for (int i = 1; i <= n; i++)
		if(a[i]==0) cout << i << " ";
} 


