//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
const int p = 1e9+7;
signed main() 
{ 
	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	set <int> t;
	cout << 100 << " ";
	cout << "\n";
    int n=100;
    while(t.size()<n)
    {
        t.insert(rand()%(int)p);
    }
    for(auto i:t)
        cout<<i<<" ";
} 


