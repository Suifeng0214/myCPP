#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
//set <int> st;
//map <int, int> mp;
//priority_queue <int> pq_l; //largest  
//priority_queue <int, vector<int>, greater<int>> pq_s; //s
void init();
void solve();
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		a.clear();
		int t;
		cin >> t;
		int odd=0, even=0;
		for (int i = 0; i < t; i++){
			int tmp;
			cin >> tmp; 
			a.emplace_back(tmp);
			if (tmp & 1){
				odd++;
			}else{
				even++;
			}
		}
		sort(a.begin(), a.end());
		int flag = 0;
		for (int i = 0; i < a.size()-1; i++){
			if (a[i]+1 == a[i+1]) flag = 1;
		}
		if (odd % 2 == 0 && even % 2 == 0)
			flag = 1;
		if (flag){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
} 

void init()
{
	
}

void solve()
{

}
 
