//Suifeng0214
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
//	freopen("ya.txt", "r", stdin);
//	freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	int w=0;
	while(q--){
		w++;
	//	cout << w << "\t";
		int n;
		cin >> n;
		int tar=0;
		vector <int> arr;
		int last_tmp=0;
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			tar ^= tmp;
			arr.emplace_back(tmp);
	//		cout << init << "\t";			
		}
		if (!tar){
			cout << "YES\n";
			continue;
		}
		bool ok=0;
		int cnt=0, now=0;
		for (int i = 0; i < arr.size(); i++){
			now ^= arr[i];
			if (now == tar){
				cnt++;
				now = 0;
			}
			if (cnt>=2){
				ok=1;
				break;
			}
		}
		cout << ((ok)? "YES\n" : "NO\n");
	}
} 



