#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
vector <int> b;
stack <int> s1;
stack <int> s2;

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
		b.clear();
		while(!s1.empty()){
			s1.pop();
		}
		while(!s2.empty()){
			s2.pop();
		}
		int n;
		cin >> n;
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			a.emplace_back(tmp);
		}
		sort(a.begin(), a.end());
		for (int i = 0; i < a.size()-1; i++){
			if (a[i]+1 != a[i+1]){
				b.emplace_back(a[i]);
				if (i==a.size()-2)
					b.emplace_back(a[i+1]);
			}else{
				i++;
			}
		}
		for (int i : b){
			if (i & 1){
				s1.emplace(i);
			}else{
				s2.emplace(i);
			}
		}
		bool flag = 1;
		if (s1.size() & 1 || s2.size() & 1){
			flag = 0;
		}
		if (flag)
			cout << "YES\n";
		else
			cout << "NO\n";
		
		//for (int i : b)cout << i << " ";
		//cout << "\n";
	}
} 

void init()
{
	
}

void solve()
{

}
 
