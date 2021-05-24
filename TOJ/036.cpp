#include <bits/stdc++.h>
#define ll long long 
using namespace std;

ll poww(ll a, ll b, ll c);
int main(void)
{
	ll a, b, c;
	cin >> a >> b >> c;
	cout << poww(a, b, c) << endl;
	return 0;
}

ll poww(ll a, ll b, ll c)
{
	ll ans=1, temp= a;//temp ©³¼Æ
	while(b){ //while (b>0)
		if(b&1 == 1){
			ans *= temp;	
			ans %= c;	
		}
		temp *= temp;
		temp %= c;
		b >>= 1;
	}
	return ans;
}
