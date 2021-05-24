#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	string name[q], id[q], tmp[q],newName[q];
	char school[9] = {'A', 'E', 'H', 'I', 'L', 'M', 'O', 'S', 'T'}; 
	for (int i = 0; i < q; i++){
		cin >> id[i] >> name[i];
		tmp[i] = id[i];
	}

	sort(id, id+q);
	for (int i = 0; i < q; i++){
		for (int j = 0; j < q; j++){
			if (id[i] == tmp[j]){
				newName[i] = name[j];
			}
		}
	}
	for (int i = 0; i < q; i++){
		cout << id[i][8]  << ": " << newName[i] << "\n";
	}
	/*
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < )
	}*/
}
