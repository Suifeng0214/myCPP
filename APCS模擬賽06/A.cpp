#include <bits/stdc++.h>
#define int long long
using namespace std;
vector <string> s;
signed main()
{
    string a;
    cin >> a;
    string tmp="";
    for (int i = 0; i < a.size(); i++){
        if (a[i] == '-'){
            i++;
            s.emplace_back(tmp);
            tmp="";
        }else{
            tmp+=a[i];
        }
    }
    if (!tmp.empty()) s.emplace_back(tmp);
    string ans="";
    for (int i = s.size()-1; i >= 0; i--){
        cout << s[i];
        if (i!=0) cout << "<-";
    }
}
