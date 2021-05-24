#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector <int> reCharm;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string charm;
	int i, newLen, flag = 0;;
	while(getline(cin, charm)){
		//toLower
		for (i = 0; i < charm.size(); i++){
			if('a' <= charm[i] && charm[i] <= 'z'){
				reCharm.push_back(charm[i]);
			}else if('A' <= charm[i] && charm[i] <= 'Z'){
				reCharm.push_back(charm[i]-'A' + 'a');
			}else{
				continue;
			}
		}
		newLen = reCharm.end() - reCharm.begin();
		
			if (newLen & 1){
				//check
				for (i = 0; i < (newLen-1)/2; i++){
					if(reCharm[i] == reCharm[newLen-1 - i]){
						continue;
					}else{
						flag = 1;
						break;
					}
				}
			}else{
				for (i = 0; i < newLen/2; i++){
					if(reCharm[i] == reCharm[newLen-1 - i]){
						continue;
					}else{
						flag = 1;
						break;
					}
				}
			}
		
		if (flag == 0){
			cout << "SETUP! " << charm << "\n";
		}else{
			cout << charm << "\n";
		}
		flag = 0;
		reCharm.clear();
	}
	return 0;
}
