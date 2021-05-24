//22/06/20 10:38
#include <bits/stdc++.h>
using namespace std;
void case_1(); void case_2(); void case_3(); void case_4();
char mp[10][10];
string num="0000000000000000";
int n;
void add();
void print_num(int n);
signed main(){
	//freopen("out.txt", "w", stdout);
	while(cin >> n){
		num="0000000000000000";
		switch (n){
			case 0:
				return 0;
			case 1:
				case_1();
				break;
			case 2:
				case_2();
				break;
			
			case 3:
				case_3();
				break;
				
			case 4:
				case_4();
				break;
		}
	}
} 

void case_1()
{
	char tmp;
	cin >> tmp;
	if (tmp == 'X'){
		cout << "0\n";
	}else{
		cout << "1\n";
	}
}

void case_2()
{
	int cnt = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> mp[i][j];
			if (mp[i][j] == 'X') cnt++;
		}
	}
	switch (cnt){
		case 0: case 1:
			cout << "2\n";
			return;
		case 3: 
			cout << "1\n";
			return;
		case 4: 
			cout << "0\n";
			return;
	}
	if (mp[0][0] =='X' && mp[1][1] == 'X' || (mp[1][0] =='X' && mp[0][1] == 'X')){
		cout << "2\n";
	}else{
		cout << "1\n";
	}
}

void case_3()
{
	int m=0;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> mp[i][j];
		}
	}
	
	
	for (int i = 0; i < 511; i++){ //每種盤面 
		bool used_col[3] = {0};
		add();
		//print_num(3*3);
		int cnt = 0;
		bool can_put=1;
		for (int j = 0; j < 9; j++){
			int row = j/3, col = j%3;
			if (mp[row][col] == 'X' || (col==0)){
				can_put = true;
				if (mp[row][col] == 'X')
					used_col[col] = 0;
			}
			if (num[j] == '1' &&
			   (can_put == false || (used_col[col] == 1 ) || (mp[row][col] == 'X' ))){
			   		cnt=0; break;
			   }
			//cout << cnt << "#\n";
			if (num[j] == '1' && can_put == 1){
				can_put = false;
				cnt++;  
				used_col[col] = true;
			}
			//cout << j/3 << " " << j%3 << "\n";
		}
		//if (cnt == 2) print_num(3*3);
		//cout << cnt << "@\n";
		m = max(cnt, m);
	}
	cout << m << "\n";
}

void case_4()
{
	int m=0;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> mp[i][j];
		}
	}
	
	
	for (int i = 0; i < (int)pow(2,16)-1; i++){ //每種盤面 
		bool used_col[4] = {0};
		add();
		//print_num(4*4);
		int cnt = 0;
		bool can_put=1;
		for (int j = 0; j < 16; j++){
			int row = j/4, col = j%4;
			if (mp[row][col] == 'X' || (col==0)){// && used_col[col] != 1
				can_put = true;
				if (mp[row][col] == 'X')
					used_col[col] = 0;
			}
			if (num[j] == '1' &&
			   (can_put == false || (used_col[col] == 1 ) || (mp[row][col] == 'X'))){
			   		cnt=0; break;
			   }
			//cout << cnt << "#\n";
			if (num[j] == '1' && can_put == 1){
				can_put = false;
				cnt++;  
				used_col[col] = true;
			}
			//cout << j/3 << " " << j%3 << "\n";
		}
		
		//cout << cnt << "@\n";
		m = max(cnt, m);
	}
	cout << m << "\n";
}
 
void add()
{
	if (num[0] == '0'){
		num[0] = '1';
	}else{
		for (int i = 0; i < 16; i++){
			if (num[i] == '0'){
				num[i] = '1';
				break;
			}else{
				num[i] = '0';
			}
		}
	}
}

void print_num(int n)
{
	for (int i = 0; i < n; i++){
		cout << num[i];
	}
	cout << "\n";
}
