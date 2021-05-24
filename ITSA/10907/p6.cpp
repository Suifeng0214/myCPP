#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
set <string> names;
set <int> ids;
//map <int, int> mp;
struct students {  
    int id;  
    string name; 
    int math;
    int ch;
}stu[50010];
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> stu[i].id >> stu[i].name	>> stu[i].ch >> stu[i].math;
		names.insert(stu[i].name);
		ids.insert(stu[i].id);
	}
	for (int i = 0; i < m; i++){
		int types;
		cin >> types;
		if (types == 1){ //find id
			int tmp;
			cin >> tmp;
			if (!ids.count(tmp)){
				cout << -1 << "\n";
			}else{
				for (int k = 0; k < n; k++){
					if (stu[k].id ==  tmp){
						cout << stu[k].id << " " << stu[k].name << " " << stu[k].ch << " " << stu[k].math << "\n";
						break;
					}
				}
			}
		}else{// find name
			string tmp;
			cin >> tmp;
			if (!names.count(tmp)){
				cout << -1 << "\n";
			}else{
				for (int k = 0; k < n; k++){
					if (stu[k].name ==  tmp){
						cout << stu[k].id << " " << stu[k].name << " " << stu[k].ch << " " << stu[k].math << "\n";
						break;
					}
				}
			}
		}
	}
} 


