#include <bits/stdc++.h>
#define int long long 
using namespace std;
vector <int> counts(10);
vector <int> nums;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int input, tmp, tmp2,a, a2;
	string skr;
	stringstream ss;
	int c=2, ck=0;
	for (int i = 12345; i <= 98765; i++){ //build the distinct nums
		counts.clear();
		counts.resize(10);
		tmp = i;
		while(tmp > 0){
			counts[tmp%10]++;
			tmp /= 10;
		}
		for (int j = 0; j <= 9; j++){
			if (counts[j] > 1)
				break;
			else if (j == 9){
				nums.emplace_back(i);
			}
		}
	}
	while(cin >> input){
		if (input == 0) return 0;
		if(c == 0||c == 1)
			cout << "\n";
		c=0;
		ck=0;
		for (int i = 0; i < nums.size(); i++){
			if (nums[i] % input == 0){
				//-------------------Check two nums
				tmp2 = nums[i] / input;
				tmp = nums[i];
				a = tmp;
				a2 = tmp2;
				counts.clear();
				counts.resize(10);
				ss.clear();
				ss.str("");
				ss << tmp;
				ss >> skr;
				counts[0] += 5-(skr.size());
				ss.clear();
				ss.str("");
				ss << tmp2;
				ss >> skr;
				counts[0] += 5-(skr.size());
				while(tmp > 0){
					counts[tmp%10]++;
					tmp /= 10;
				}
				while(tmp2 > 0){
					counts[tmp2%10]++;
					tmp2 /= 10;
				}
				ck = 0;
				for (int k = 0; k <= 9; k++){
					if (counts[k] > 1){
						ck = 1;
						break;
					}
				}
				if (ck == 0){
					c = 1;
					cout << setw(5) << setfill('0') << a;
					cout << " / ";
					cout << setw(5) << setfill('0') << a2;
					cout << " = " << a / a2 <<"\n";
				}
			}
			//----------------------
		}
		if (c == 0){
			cout << "There are no solutions for " << input << ".\n";
		}
	}
}
