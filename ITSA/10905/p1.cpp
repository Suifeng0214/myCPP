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
	double a, b, c; //�Q�w���ơB��X�|�a�y�B�`��y����
	cin >> a >> b >> c;
	cout << fixed << setprecision(2) << (a+b)/c << "\n";
	
	int q= 9;
	while(q--){
		double a, b, c, d, e, f;//�w���ơB�|�a�y�O�e�B�QĲ���y���ơB���ơB�����묹���B�S����
		cin >> a >> b >> c >> d >> e >> f;
		double x = (a+b+c) / (d+b+e+c); //�W�S�v
		double y = (f/d); 
		cout <<fixed << setprecision(3) << x+y;
		if (q != 0) cout << "\n";
	} 
} 


