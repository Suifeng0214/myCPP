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
		for (int i = 0; i < input.size(); i++){
			bool now = (input[i] == '1')? 1:0;
			if (now == 1){
				tmp += '1';
			}else{
				int cnt = 0;
				bool check_one=0;
				for (int j = 0; j < tmp.size(); j++){
					if (tmp[j] == '1'){
						//tmp="0";
						check_one=1;
						break;
					}
				}
				if (!check_one){
					ans+="0";
				}
			}
			
			
		}
		//ans+=tmp;
		cout << ans << "\n";
	}
} 

void init()
{
	
}

void solve()
{

}
 
