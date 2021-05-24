#include <bits/stdc++.h>
#define int long long
using namespace std;
vector <int> p;
//·Ç³ÆFSTÅoQQ
signed main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int mx=-1;
    for (int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        mx= max(mx, tmp);
        p.emplace_back(tmp);
    }
    int ans=0, now= -1;
    for (int i = 0; i < p.size(); i++){
        if (i < k){
            ans+= max(p[i], now);
            now = max(p[i], now);
        }else{
            ans += mx;
        }
    }
    cout << ans;
}
