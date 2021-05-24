#include <bits/stdc++.h>
using namespace std;
vector <int> a;
vector <int> b;
int times, nums, tmp, l, r, k, ch=0;
bool flag=0;
void check();
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> times;
	while(times--){
		cin >> nums;
		a.clear();
		b.clear();
		a.reserve(1005);
		b.reserve(1005);
		for (int i = 0; i < nums; i++){
			cin >> tmp;
			a.push_back(tmp);
		}
		for (int i = 0; i < nums; i++){
			cin >> tmp;
			b.push_back(tmp);
		}
		if (a==b){
			cout << "YES\n";
		}else{
			check();
		}
	}
    return 0;
}

void check()
{
	ch = 0;
	for (int i = 0; i < nums; i++){
		if (a[i+1] != b[i+1] && flag == 0){
			flag = 1;
			ch++;
		}
		if (a[i] != b[i] && a[i+1] == b[i+1] && flag == 1){
			ch++;
			flag = 0;
		}
		if (ch > 2){
			if(times == 0){
				cout << "NO";
			}else{
				cout << "NO\n";
			}
			return;
		}
	}
	flag = 0;
	for (int i = 0; i < nums; i++){
		if (a[i] > b[i]){
			if(times == 0){
				cout << "NO";
			}else{
				cout << "NO\n";
			}
			return;
		}else if (flag == 1){
			if (b[i] - a[i] != k){
				if(times == 0){
					cout << "NO";
				}else{
					cout << "NO\n";
				}
				return;
			}
			if (a[i+1] == b[i+1]){
				r = i+2;
				if(times == 0){
				cout << "YES";
			}else{
				cout << "YES\n";
			}
				return;
			}
		}else if (a[i] != b[i] && flag == 0){
			flag = 1;
			//l = i+1;
			k = b[i] - a[i];
		}
	}
}

