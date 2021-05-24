#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long

ll mul(ll a,ll b,ll mod);
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector <int> a;
	int n, m, tmp;
	cin >> n >> m;
	while(n--){
		cin >> tmp;
		a.emplace_back(tmp);
	}
	int ans=1;
	for (int i = 0; i < a.size()-1; i++){
		for (int j = i+1; j < a.size(); j++){
			ans = mul(abs(a[i] - a[j]), ans, m);
			ans %= m;
		}
	}
	cout << ans%m;
} 

ll mul(ll a,ll b,ll mod)
{
    a%=mod;
    b%=mod;
    ll res=0;
    while(b){
        if(b&1){
            res+=a;
            if(res>=mod)
                res-=mod;
        }
        b>>=1;
        a<<=1;
        if(a>=mod)  a-=mod;
    }
    return res;
}
