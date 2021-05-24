//Author: Suifeng0214
#include <bits/stdc++.h>
using namespace std;
char mp[25][25];
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		int d;
	    double x, y, z;
		double tmpx=0, tmpy=0, tmpz=0;
		cin >> d >> x >> y >> z;
		for (int i = 0; i < d; i++){
			tmpx = y/2 + z/2;
			tmpy = x/2 + z/2;
			tmpz = x/2 + y/2;
			x= tmpx;
			y= tmpy;
			z= tmpz;
		}
		cout << fixed << setprecision(3) << x << " " << y << " " << z << "\n";
	}
} 
