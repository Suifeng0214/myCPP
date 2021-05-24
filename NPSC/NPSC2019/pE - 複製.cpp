#include <bits/stdc++.h>
using namespace std;
int ans[1000010];
vector <int> ans2;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ans2.reserve(100010);
	int judge, player, count=0, Max=0, Mans, tmp=0, layer=0;
	string que;
	cin >> judge >> player;
	cin.ignore();
	while (getline(cin, que)){
		layer++;
		for (int i = 0; i < que.size(); i++){
			if (que[i] == '0'){
				ans[i]++;
				count++;
			}
		}
		Max = (Max < count)? count : Max;
		count = 0; 
		for (int i = 0; i < player; i++){
			if (ans[i] == layer){
				tmp++;
			}
		}
		ans2.push_back(tmp);
		tmp = 0;
	}
	cout << Max << "\n";
	for (int i = 1; i < ans2.size(); i++){
		cout << ans2[i] <<  "\n"; 
	}
}
