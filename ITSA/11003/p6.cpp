#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
int mp[10][10]={
{1,7,4,0,9,4,8,8,2,4},
{5,5,1,7,1,1,5,2,7,6},
{1,4,2,3,2,2,1,6,8,5},
{7,6,1,8,9,2,7,9,5,4},
{3,1,2,3,3,4,1,1,3,8},
{7,4,2,7,7,9,3,1,9,8},
{6,5,0,2,8,6,0,2,4,8},
{6,5,0,9,0,0,6,1,3,8},
{9,3,4,4,6,0,6,6,1,8},
{4,9,6,3,7,8,8,2,9,1}
};
vector <pair<char, pair<int, int>>> mp2;
string ans[10][10];
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	mp2.emplace_back('L',make_pair(0, 5));
	mp2.emplace_back('A',make_pair(1, 1));
	mp2.emplace_back('D',make_pair(2, 7));
	mp2.emplace_back('B',make_pair(3, 2));
	mp2.emplace_back('C',make_pair(3, 4));
	mp2.emplace_back('I',make_pair(3, 9));
	mp2.emplace_back('E',make_pair(5, 7));
	mp2.emplace_back('H',make_pair(6, 4));
	mp2.emplace_back('K',make_pair(7, 0));
	mp2.emplace_back('G',make_pair(8, 2));
	mp2.emplace_back('F',make_pair(8, 6));
	mp2.emplace_back('J',make_pair(8, 9));
	
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			int dis = 10000000000;
			for (int k = 0; k < mp2.size(); k++){
				int tmp = (mp[i][j]-mp[mp2[k].S.F][mp2[k].S.S])*(mp[i][j]-mp[mp2[k].S.F][mp2[k].S.S]) + (mp2[k].S.F-i)*(mp2[k].S.F-i) + (mp2[k].S.S-j)*(mp2[k].S.S-j);
				if (tmp < dis){
					ans[i][j] = "";
					ans[i][j] += mp2[k].F;
					dis = tmp;
				}
			}
		}
	}
	int q;
	cin >> q;
	while(q--){
		int x, y;
		cin >> x >> y;
		cout << ans[x][y] << "\n";	
	}

} 


