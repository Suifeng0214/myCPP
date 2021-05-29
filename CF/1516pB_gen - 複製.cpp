//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
vector <int> box[100000];
int arr[5];
int ouo =0 ;
void dfs(int x, int now){
	arr[now] = x;
	if (now == 3){
		cout << "4\n";
		for (int i = 0; i < 4; i++) cout << arr[i] << " ";
		cout << "\n";
		ouo++;
		return;
	}
	for (int i = 0; i <= 10; i++){
		dfs(i, now+1);
	}
}
signed main() 
{ 
	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cout << "14641\n";
	for (int i = 0; i <= 10; i++)
		dfs(i, 0);
//	cout << ouo << "@\n";
	/*
	int q = 1000;
	cout << q << "\n";
	while(q--){
		cout << "3\n"
		for (int i = 0; i < 3; i++){
			cout << arr[q][i] << " ";
		}
		cout << "\n";
	}*/
} 



