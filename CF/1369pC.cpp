#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
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
		int none;
		cin >> none;
		string input;
		cin >> input;
		
		string ans="", tmp="";
		bool one=0;
		for (int i = 0; i < input.size()-1; i++){
			if (input[i] == '1') one = 1;
			if (one == 0) ans+='0';
			if (one==1 && input[i] != input[i+1]) tmp+=input[i];
		}
		if (input.size() > 1)
			//if (input[input.size()-1] != input[input.size()-2])
				tmp+=input[input.size()-1];
		cout << tmp << "\n";
		if (tmp.size() & 1){
			for (int i = 0; i < tmp.size()/2; i++){
				ans += '0';
			}
			ans+='1';
		}else{
			for (int i = 0; i < tmp.size()/2; i++){
				ans += '0';
			}
		}
		cout << ans<<"!\n";
	}
} 

void init()
{
	
}

void solve()
{

}
 
