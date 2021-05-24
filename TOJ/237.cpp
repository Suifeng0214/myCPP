#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
    int a1, a2, a3,
		b1, b2, b3,
		c1, c2, c3;
    cin >> a1 >> a2 >> a3
    	>> b1 >> b2 >> b3
    	>> c1 >> c2 >> c3;
    cout << 4 << " " << (a2+b2+c2-(a1+a2+a3))/2 << "\n";
}
