//Suifeng0214 20200903
#include <bits/stdc++.h>
using namespace std;
map <int, char> DIR;
map <pair<int, int>, bool> check;
int now, x, y;
void undo(){
	switch (now){
		case 0: //N
			y-=1; 
			break;
		case 1: //E
			x-=1;
			break;
		case 2: //S
			y+=1;
			break;
		case 3: //W
			x+=1;
			break;
	}
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("out.txt", "w", stdout);
	int a, b;
	DIR[0] = 'N';
	DIR[1] = 'E';
	DIR[2] = 'S';
	DIR[3] = 'W';
	cin >> a >> b;
	char dir;
	while(cin >> x >> y >> dir){
		for (int i = 0; i < 4; i++) if (DIR[i] == dir) now = i;
		cin.ignore();
		string s;
		getline(cin, s);
		//cout << s << endl;
		bool LOST=0;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == 'L'){
				now = (now+4-1)%4;
			}else if (s[i] == 'R'){
				now = (now+1)%4;
			}else{
				int tmpx=x, tmpy=y;
				if (DIR[now] == 'N'){
					y+=1;
				}else if (DIR[now] == 'W'){
					x-=1;
				}else if (DIR[now] == 'E'){
					x+=1;
				}else{
					y-=1;
				}
				if (x<0||y<0||x>a||y>b){
					if (!check[make_pair(tmpx, tmpy)]){
						check[make_pair(tmpx, tmpy)] = 1;
						LOST=1;
						undo();
						break;
					}
					if (check[make_pair(tmpx, tmpy)])
					undo();
				}
			}
		}
		cout << x << " " << y << " " << DIR[now];
		if (LOST) cout << " LOST\n";
		else cout << "\n";
	}
 
}
