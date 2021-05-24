#include <iostream>  
#include <map>  
using namespace std;  
map <string, pair <int, int> > mp;  
map <string, pair <int, int> > ::iterator i;
signed main(){  
    string s;  
    while(cin >> s){  
        if (s == "0000000000") break;  
        int p, x;  
        cin >> p >> x;  
        mp[s].first = p;  
        mp[s].second += x;  
    }  
    double ans = 0;  
    for (i = mp.begin(); i!=mp.end(); i++){  
        ans += i->second.first*i->second.second;  
        if (i->first[0] == 'X' && i->second.second >= 2)  
            ans -= (double)i->second.first * (i->second.second/2);  
        if (i->first[0] == 'Y')  
            ans -= (double)i->second.first * (i->second.second/2)/2;    
    }  
    cout << ans << "\n";  
}  
