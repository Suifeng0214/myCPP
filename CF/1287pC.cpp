#include <bits/stdc++.h>
using namespace std;
#define int long long
	int q, tmp, q2;
	set <int> sset;
	vector <int> a;
	vector <int> lack;
void first();
void last();
void printAns();
void Do();
void fill();
void findDoubleOdd();
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> q;
	q2 = q;
	while (q--){
		cin >> tmp;
		a.emplace_back(tmp);
		sset.insert(tmp);
	}
	for (int i = 1; i <= q2; i++){
		if (!sset.count(i)){		//find the lack elements in a[]
			lack.emplace_back(i);
		}
	}
	findDoubleOdd();
	first();
	Do();
	printAns();
	
	for (int i : lack) cout << i << " ";
	cout << "\n";
	for (int i : a) cout << i << " ";
	 
} 

void findDoubleOdd()
{
	for (int i = 1; i < a.size()-1; i++){
		if (a[i] == 0){
			if(a[i-1]&1 && a[i+1]&1){
				for (int j = 0; j < lack.size(); j++){
					if (lack[j] & 1){
						a[i] = lack[j];
						lack.erase(lack.begin()+j);
						return;
					}
				}
			}
		}
	}
}

void first()
{
	if (a[0] == 0){
		if (a[1] == 0) return;
		if (a[1] & 1){
			for (int i = 0; i < lack.size(); i++){
				if (lack[i] & 1){
					a[0] = lack[i];
					lack.erase(lack.begin()+i);
					return;
				}
				if(i == lack.size()-1){
					a[0] = lack[i];
					lack.erase(lack.begin()+i);
				}
			}
		}else{
			for (int i = 0; i < lack.size(); i++){
				if (!(lack[i] & 1)){
					a[0] = lack[i];
					lack.erase(lack.begin()+i);
					return;
				}
				if(i == lack.size()-1){
					a[0] = lack[i];
					lack.erase(lack.begin()+i);
				}
			}
		}
	}
}

void last()
{
	if (a[q2-1] == 0){
		if (a[q2-2] & 1){
			for (int i = 0; i < lack.size(); i++){
				if (lack[i] & 1){
					a[q2-1] = lack[i];
					lack.erase(lack.begin()+i);
					return;
				}
				if(i == lack.size()-1){
					a[q2-1] = lack[i];
					lack.erase(lack.begin()+i);
				}
			}
		}else{
			for (int i = 0; i < lack.size(); i++){
				if (!(lack[i] & 1)){
					a[q2-1] = lack[i];
					lack.erase(lack.begin()+i);
					return;
				}
				if(i == lack.size()-1){
					a[q2-1] = lack[i];
					lack.erase(lack.begin()+i);
				}
			}
		}
	}
}

void printAns()
{
	int ans = 0;
	for (int i = 0; i < a.size()-1; i++){
		if ((a[i] + a[i+1]) % 2 != 0) {
			ans++;
		}
	}
	cout << ans << "\n";
}

void Do()
{
	for (int i = 1; i < a.size(); i++){
		if (lack.empty()) break;
		if (a[i] == 0){
			if (i != a.size()-1){
				if (a[i-1] == 0 && a[i+1] == 0) continue;
				if (!(a[i+1] & 1) && a[i+1] != 0){
					for (int j = 0; j < lack.size(); j++){
						if (!(lack[j] & 1)){
							a[i] = lack[j];
							lack.erase(lack.begin()+j);
							break;
						}
						if(j == lack.size()-1){
							a[i] = lack[j];
							lack.erase(lack.begin()+j);
						}
					}
				}
			}
			if (a[i-1] & 1){
				for (int j = 0; j < lack.size(); j++){
					if (lack[j] & 1){
						a[i] = lack[j];
						lack.erase(lack.begin()+j);
						break;
					}
					if(j == lack.size()-1){
						a[i] = lack[j];
						lack.erase(lack.begin()+j);
					}
				}
			}else if ( !(a[i-1]&1) && a[i-1] != 0){
				for (int j = 0; j < lack.size(); j++){
					if (!(lack[j] & 1)){
						a[i] = lack[j];
						lack.erase(lack.begin()+j);
						break;
					}
					if(j == lack.size()-1){
						a[i] = lack[j];
						lack.erase(lack.begin()+j);
					}
				}
			}
		}
	}
	
	if (!lack.empty()){
		for (int i = 0; i < lack.size(); i++){
			for (int j = 0; j < a.size(); j++){
				if (a[j] == 0){
					a[j] = lack[i];
					break;
				}
			}
		}
	}
}

void fill()
{
	if (!lack.empty()){
		for (int i = 0; i < lack.size(); i++){
			for (int j = 0; j < a.size(); j++){
				if (a[j] == 0){
					a[j] = lack[i];
					break;
				}
			}
		}
	}
	return;
} 


