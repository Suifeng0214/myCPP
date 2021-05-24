#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double a, b, c, d, ans;
    int times;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> times;
	while (times--){
	cin >> a >> b >> c >> d;
    ans = -(b/(3*a)) + cbrt( (b*c / (6*a*a)) - b*b*b/(27*a*a*a) + d/(2*a) 
			+ sqrt( (b*c/(6*a*a) - b*b*b/(27*a*a*a) - d/(2*a)) * (b*c/(6*a*a) - b*b*b/(27*a*a*a) - d/(2*a)) 
			+ (c/(3*a) - b*b/(9*a*a)) * (c/(3*a) - b*b/(9*a*a)) * (c/(3*a) - b*b/(9*a*a)) )) 
			+ cbrt( (b*c / (6*a*a)) - b*b*b/(27*a*a*a) + d/(2*a) 
			- sqrt( (b*c/(6*a*a) - b*b*b/(27*a*a*a) - d/(2*a)) * (b*c/(6*a*a) - b*b*b/(27*a*a*a) - d/(2*a)) 
			+ (c/(3*a) - b*b/(9*a*a)) * (c/(3*a) - b*b/(9*a*a)) * (c/(3*a) - b*b/(9*a*a)) ));
	cout << fixed << setprecision(3) << abs(ans) << "\n";
	}
}
