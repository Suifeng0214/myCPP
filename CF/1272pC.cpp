#include <bits/stdc++.h>
using namespace std;
vector <char> av;
bool flag=0;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long a, k, sum=0, tmp=0;
	char tmpC;
	bool flag;
	string S;
	
	cin >> a >> k;
	av.reserve(k);
	cin >> S;
	for (int i = 0; i < k; i++){
		cin >> tmpC;
		av.push_back(tmpC);
	} 
	
	for (int i = 0; i < S.size(); i++){
		for(int j = 0; j < av.size(); j++){
			if (S[i] != av[j]){
				if (flag && j == av.size()-1){
					sum += tmp*(tmp+1)/2;
					tmp=0;
					break;
				}
			}else{
				flag = 1;
				tmp++;
				if (i == S.size()-1){
					sum += tmp*(tmp+1)/2;
				}
				break;
			}
		}
	}
	cout << sum;
    return 0;
}


