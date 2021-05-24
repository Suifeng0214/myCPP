#include <bits/stdc++.h> 
using namespace std;
#define int long long
int gcd(int a, int b);
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	int x1, y1, x2, y2;
	while(cin >> x1 >> y1 >> x2 >> y2){
		int minX, minY;
		minX = abs(x2 - x1);
		minY = abs(y2 - y1);
		if (minX == 0){
			cout << abs(y1-y2)+1 << "\n";
			continue;
		}else if (minY == 0){
			cout << abs(x1-x2)+1 << "\n";
			continue;
		}
		int tmpx = minX, tmpy = minY;
		while(gcd(max(minX, minY), min(minX, minY)) != 1){
			int tmp = gcd(max(minX, minY), min(minX, minY));
			minX /= tmp;
			minY /= tmp; 
		}
		cout << abs(y2-y1) + abs(x2-x1) + tmpx/minX << "\n"; 
	}
}

int gcd(int a, int b)
{
	if (b == 0)	return a;
	return gcd(b, a%b);
}
