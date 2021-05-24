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
	double a, b, c; //砆ゴ计щ胊瞴羆щ瞴Ы计
	cin >> a >> b >> c;
	cout << fixed << setprecision(2) << (a+b)/c << "\n";
	
	int q= 9;
	while(q--){
		double a, b, c, d, e, f;//ゴ计胊瞴玂癳砆牟ō瞴Ω计ゴ计蔼碾ゴ耂ゴ计
		cin >> a >> b >> c >> d >> e >> f;
		double x = (a+b+c) / (d+b+e+c); //耂瞯
		double y = (f/d); 
		cout <<fixed << setprecision(3) << x+y;
		if (q != 0) cout << "\n";
	} 
} 


