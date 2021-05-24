#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
string mp[110];
vector <pair<int, int>> Z;
vector <pair<int, int>> O;
vector <string> ans;
int dx[] = {0, 1, 0, 1};
int dy[] = {0, 0, 1, 1};
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		ans.clear();
		int r, c;
		cin >> r >> c;
		string stmp;
		for (int i = 1; i <= r; i++){
			cin >> stmp; 
			mp[i] = "0" + stmp;
		}
		if (r&1 && c&1){
			if (mp[r][c] == '1'){
				mp[r][c] = '0';
				mp[r-1][c] = ((mp[r-1][c] == '0')? '1' : '0');
				mp[r-1][c-1] = ((mp[r-1][c-1] == '0')? '1' : '0');

				stmp = to_string(r) + " " + to_string(c) + " ";
				stmp += to_string(r-1) + " " + to_string(c) + " ";
				stmp += to_string(r-1) + " " + to_string(c-1) + " ";
				ans.emplace_back(stmp);
			}
			for (int i = 1; i <= r-1; i++){
				if (mp[i][c] == '1'){
				//	mp[i][c] = '0';
					mp[i][c-1] = ((mp[i][c-1] == '0')? '1' : '0');
					mp[i+1][c-1] = ((mp[i+1][c-1] == '0')? '1' : '0');
					stmp = to_string(i) + " " + to_string(c) + " ";
					stmp += to_string(i) + " " + to_string(c-1) + " ";
					stmp += to_string(i+1) + " " + to_string(c-1) + " ";
					ans.emplace_back(stmp);
				}
			}
			for (int i = 1; i <= c-1; i++){
				if (i==c-1 && mp[r][i] == '1'){
				//	mp[r][i] = '0';
					mp[r-1][i] = ((mp[r-1][i] == '0')? '1' : '0');
					mp[r-1][i-1] = ((mp[r-1][i-1] == '0')? '1' : '0');
					
					stmp = to_string(r) + " " + to_string(i) + " ";
					stmp += to_string(r-1) + " " + to_string(i) + " ";
					stmp += to_string(r-1) + " " + to_string(i-1) + " ";
					ans.emplace_back(stmp);
					continue;
				}
				if (mp[r][i] == '1'){
				//	mp[r][i] = '0';
					mp[r-1][i] = ((mp[r-1][i] == '0')? '1' : '0');
					mp[r-1][i+1] = ((mp[r-1][i+1] == '0')? '1' : '0');

					stmp = to_string(r) + " " + to_string(i) + " ";
					stmp += to_string(r-1) + " " + to_string(i) + " ";
					stmp += to_string(r-1) + " " + to_string(i+1) + " ";
					ans.emplace_back(stmp);
				}
			}
		}
		//for (int i = 0; i <= r; i++) cout << mp[i] << "\n";
		//return 0 ;
		for (int i = 1; i <= r-1; i+=2){
			for (int j = 1; j <= c-1; j+=2){
				int one=0, zero=0;
				Z.clear(); O.clear();
				for (int k = 0; k < 4; k++){
					int x = i + dx[k];
					int y = j + dy[k];
					if (mp[x][y] == '0') zero++, Z.emplace_back(x, y);
					else one++, O.emplace_back(x, y), mp[x][y] = '0';
				}
				if (one==2 && zero==2){
					string stmp="", stmp2="";
//						cout << "@@";
					stringstream ss3, ss4, ss5, ss6;
					for (int ii = 0; ii < Z.size(); ii++){
						stringstream ss1, ss2;
						//cout << "@@";
						string stmp_x, stmp_y;
						ss1 << Z[ii].F;	ss1 >> stmp_x;
						ss2 << Z[ii].S;	ss2 >> stmp_y;
						stmp +=  stmp_x + " " + stmp_y + " ";
					}
					stmp2=stmp;
					string stmp_x, stmp_y;
					ss3 << O[0].F; ss3 >> stmp_x;
					ss4 << O[0].S; ss4 >> stmp_y;
					stmp += stmp_x + " " + stmp_y;
					stmp_x="", stmp_y="";
					ss5 << O[1].F; ss5 >> stmp_x;
					ss6 << O[1].S; ss6 >> stmp_y;
					stmp2 += stmp_x + " " + stmp_y;
					ans.emplace_back(stmp);
					ans.emplace_back(stmp2);
				}else if (one==1 && zero==3){
					vector <pair<int, int>> ZZ;
					vector <pair<int, int>> OO;	
					ZZ.clear(); OO.clear();
					string stmp="", stmp2="";
//						cout << "@@";
					stringstream ss3, ss4, ss5, ss6;
					for (int ii = 0; ii < Z.size(); ii++){
						if (abs(Z[ii].F - O[0].F) + abs(Z[ii].S - O[0].S) == 2){
							ZZ.emplace_back(Z[ii].F, Z[ii].S); 
							continue;
						}else{
							OO.emplace_back(Z[ii].F, Z[ii].S); 
						}
						stringstream ss1, ss2;
						//cout << "@@";
						string stmp_x, stmp_y;
						ss1 << Z[ii].F;	ss1 >> stmp_x;
						ss2 << Z[ii].S;	ss2 >> stmp_y;
						stmp +=  stmp_x + " " + stmp_y + " ";
					}
					ZZ.emplace_back(O[0].F, O[0].S);
					string stmp_x, stmp_y;
					ss3 << O[0].F; ss3 >> stmp_x;
					ss4 << O[0].S; ss4 >> stmp_y;
					stmp += stmp_x + " " + stmp_y;
					ans.emplace_back(stmp);
					//go to 2==2
					stmp="", stmp2="";
	//						cout << "@@";
						stringstream ss7, ss8, ss9, ss10;
						for (int ii = 0; ii < ZZ.size(); ii++){
							stringstream ss1, ss2;
							//cout << "@@";
							string stmp_x, stmp_y;
							ss1 << ZZ[ii].F;	ss1 >> stmp_x;
							ss2 << ZZ[ii].S;	ss2 >> stmp_y;
							stmp +=  stmp_x + " " + stmp_y + " ";
						}
						stmp2=stmp;
						stmp_x="", stmp_y="";
						ss7 << OO[0].F; ss7 >> stmp_x;
						ss8 << OO[0].S; ss8 >> stmp_y;
						stmp += stmp_x + " " + stmp_y;
						stmp_x="", stmp_y="";
						ss9 << OO[1].F; ss9 >> stmp_x;
						ss10 << OO[1].S; ss10 >> stmp_y;
						stmp2 += stmp_x + " " + stmp_y;
						ans.emplace_back(stmp);
						ans.emplace_back(stmp2);
					
				}else if (one==3 && zero==1){
					string stmp="";
//						cout << "@@";
					stringstream ss3, ss4;
					for (int ii = 0; ii < O.size(); ii++){
						stringstream ss1, ss2;
						//cout << "@@";
						string stmp_x, stmp_y;
						ss1 << O[ii].F;	ss1 >> stmp_x;
						ss2 << O[ii].S;	ss2 >> stmp_y;
						stmp +=  stmp_x + " " + stmp_y + " ";
					}
					ans.emplace_back(stmp);
				}else if (one==4){
					string stmp="";
					for (int ii = 0; ii < 3; ii++){
						stringstream ss1, ss2;
						string stmp_x, stmp_y;
						ss1 << O[ii].F;	ss1 >> stmp_x;
						ss2 << O[ii].S;	ss2 >> stmp_y;
						stmp +=  stmp_x + " " + stmp_y + " ";
					}
					ans.emplace_back(stmp);
				//nxt oper
					vector <pair<int, int>> ZZ;
					vector <pair<int, int>> OO;	
					ZZ.clear(); OO.clear();
					stmp="";
						stringstream ss1, ss2;
						string stmp_x, stmp_y;
						ss1 << O[3].F;	ss1 >> stmp_x;
						ss2 << O[3].S;	ss2 >> stmp_y;
					stmp +=  stmp_x + " " + stmp_y + " ";
					for (int ii = 0; ii < 4; ii++){
						if (abs(O[3].F - O[ii].F) + abs(O[3].S - O[ii].S) == 1){
							OO.emplace_back(O[ii].F, O[ii].S); 
							ss1.clear(), ss1.str("");
							ss2.clear(), ss2.str("");
							stmp_x="", stmp_y="";
							ss1 << O[ii].F;	ss1 >> stmp_x;
							ss2 << O[ii].S;	ss2 >> stmp_y;
							stmp += stmp_x + " " + stmp_y + " ";
							continue;
						}else{
							ZZ.emplace_back(O[ii].F, O[ii].S);
						}
					}
					ans.emplace_back(stmp);
				//nxt oper
					//go to 2==2
					string stmp2;
					stmp="", stmp2="";
	//						cout << "@@";
						stringstream ss7, ss8, ss9, ss10;
						for (int ii = 0; ii < ZZ.size(); ii++){
							stringstream ss1, ss2;
							//cout << "@@";
							string stmp_x, stmp_y;
							ss1 << ZZ[ii].F;	ss1 >> stmp_x;
							ss2 << ZZ[ii].S;	ss2 >> stmp_y;
							stmp +=  stmp_x + " " + stmp_y + " ";
						}
						stmp2=stmp;
						stmp_x="", stmp_y="";
						ss7 << OO[0].F; ss7 >> stmp_x;
						ss8 << OO[0].S; ss8 >> stmp_y;
						stmp += stmp_x + " " + stmp_y;
						stmp_x="", stmp_y="";
						ss9 << OO[1].F; ss9 >> stmp_x;
						ss10 << OO[1].S; ss10 >> stmp_y;
						stmp2 += stmp_x + " " + stmp_y;
						ans.emplace_back(stmp);
						ans.emplace_back(stmp2);
				}
				/*
				for (int i = 0; i < Z.size(); i++){
					cout << Z[i].F << " " << Z[i].S << "\n";
				}*/
			//	cout << one << "@" << zero << "\n";
				if (c&1 && j==c-2 && !(r&1 && c&1)) j--;
			}
				if (r&1 && i==r-2 && !(r&1 && c&1)) i--;
		}
		cout << ans.size() << "\n";
		for (int i = 0; i < ans.size(); i++){
			cout << ans[i] << "\n";
		}
	}
} 


