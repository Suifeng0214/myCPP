#include <bits/stdc++.h>

using namespace std;
vector <int> step;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q, sum=0, a, b;
    string in, ans;
    bool flag = 0;
    cin >> q;
    while(q--){
    	cin >> in;
    	ans = in;
    	sum = 0;
    	step.clear();
    	for (int i = 0; i < in.size(); i++){
    		for (int j = i; j < in.size()-2; j++){
    			if (in[j] > in[j+2]){
    				swap(in[j], in[j+2]);
    				step.push_back(j+1);
					step.push_back(j+2+1);
					sum++;
				}
			}
		}
		for (int i = in.size()-1; i >= 0; i--){
    		for (int j = i; j >= 2; j--){
    			if (in[j] < in[j-2]){
    				swap(in[j], in[j-2]);
    				step.push_back(j+1);
					step.push_back(j-2+1);
					sum++;
				}
			}
		}
		sort(ans.begin(), ans.end());
		if (in == ans){
			cout << "YES\n";
			cout << sum << "\n";
			if (!step.empty()) 
			for (int i = 0; i < step.size()-1; i++){
				cout << step[i] << " " << step[i+1] << "\n";
			}
		}else{
			cout << "NO\n";
		}
	}
    return 0;
}
