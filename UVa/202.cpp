#include <bits/stdc++.h>
using namespace std;
bool used[1000000];
vector <int> arr;
vector <int> modd;
signed main(){
	freopen("out.txt", "w", stdout);
	int a, b;
	while(cin >> a >> b){
		if (a%b == 0){
			cout << a << "/" << b << " = " << a/b << ".(0)\n";
			cout << "   1 = number of digits in repeating cycle\n\n";
			continue;
		}
		arr.clear();
		modd.clear();
		memset(used, 0, sizeof(used));
		int pre = a/b;
		int now = a%b;
//		arr.emplace_back(a/b);
		modd.emplace_back(now);
		used[now] = 1;
		now *= 10;
		//modd.emplace_back(now%b);
		while(now / b < 1){
			arr.emplace_back(0);
			now *= 10;
		}
		if (now % b == 0){ // 76 25
			cout << a << "/" << b << " = " << a/b << ".";
			for (int i = 0 ; i < arr.size(); i++) cout << arr[i];cout <<now/b<<"(0)\n";
			cout << "   1 = number of digits in repeating cycle\n\n";
			continue;
		}
		int re=-1;
		
		while(1){
			if (used[now % b]){
				re = now%b;
				arr.emplace_back(now/b);
				break;
			}
			arr.emplace_back(now/b);
			modd.emplace_back(now%b);
			used[now%b] = 1;
			now %= b;
			now*=10;
		}
		bool flag = 0;	
//		cout << re << "@";
		int idx;
		/*
		cout << "\n";
		for (int i = 0; i < modd.size(); i++){
			cout << modd[i] << " ";
		}
		cout << "\n";
		for (int i = 0; i < arr.size(); i++)
			cout << arr[i] << " ";
		cout << "@\n";*/
		cout << a << "/" << b << " = ";
		cout << pre << ".";
		for (int i = 0; i < arr.size(); i++){
			if (re==modd[i]){
				cout << "(", idx=i;

				break;
			}else{
				cout << arr[i];
			}
		}
		int cnt = 0;
		for (int i = idx; i < arr.size(); i++){
			cnt ++;
			if (cnt > 50){
				cout << "...";
				break;
			}
			cout << arr[i];
		}
		cout << ")\n";
		cout << "   "<<arr.size() - idx<<" = number of digits in repeating cycle\n\n";
	}
}
