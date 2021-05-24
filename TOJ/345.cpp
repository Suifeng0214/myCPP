#include <bits/stdc++.h>
using namespace std;
string st;
int charTimes[26];
int ans[2] = {0, 1001};

int main(void)
{
	int times, tmp, i, j, num;
	cin >> times;
	for (i = 0; i < times; i++){
		cin >> num;
		getline(cin, st);
		//construct charTimes[]
		for (j = 0; j < st.size(); j++){
			int x = st[j] - 'a';
			if (0 <= x && x <= 25){
				charTimes[x]++ ;
			}else{
				continue;
			}
		}
		//search & fill in ans[]
		for (j = 0; j < 26; j++){
			if (ans[1] >= charTimes[j] && charTimes[j] != 0){
				ans[1] = charTimes[j];
				ans[0] = j;
			} 
		}
		
		//output
		cout << (char)(ans[0] + 'a') << " " << ans[1] << "\n"; 
		//reset value
		for (j = 0; j < 26; j++){
			charTimes[j] = 0;
		}
		ans[0] = 0; ans[1] = 1001;
	}
}

