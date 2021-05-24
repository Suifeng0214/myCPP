#include <bits/stdc++.h>
using namespace std;
long long tri[3];
int main(void)
{
	int x;
	cin >> x;
	while(cin >> tri[0] >> tri[1] >> tri[2]){
		sort(tri, tri+3);
		if (tri[0] == tri[1] && tri[1] == tri[2]){
			cout << "Equilateral_triangle\n";
		}else if (tri[0]*tri[0] + tri[1]*tri[1] == tri[2]*tri[2]){
			cout << "Right_triangle\n";
		}else if (tri[0]*tri[0] + tri[1]*tri[1] > tri[2]*tri[2]){
			cout << "Acute_triangle\n";
		}else{
			cout << "Obtuse_triangle\n";
		}
	}
	return 0;
}

