#include <bits/stdc++.h>
/*
�������Ʀr�|�Ok��Ʀr���_�`��
���ոլݥ�x���ek���`���`
�p�G�|��x�p �N��k��`���`�̥k�䪺���O9�����@��+1
�[�@����k�䪺������0

�N�O������C�쪺�Y�Ӧ��+1 �M��᭱�i�H��0��������0������ 
*/
using namespace std;
string ADD(string x);
bool aIsBig(string a, string b);
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n, k, x, origin;
	bool flag = 1;
	string num, loop="", ans;
	stringstream ss;
	cin >> n >> k;
	cin >> num;
	for (int i = 0; i < k; i++){
		loop += num[i];
	}
	for (int i = 0; i < n; i++){
		ans += loop[i%k];
	}
	if (aIsBig(num, ans)){
		loop = ADD(loop);
		ans = "";
		for (int i = 0; i < n; i++){
			ans += loop[i%k];
		}
	}
	cout << ans.size() << "\n" << ans;
	return 0;
}

void BadSol()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n, k, x, tmp;
	bool flag = 1;
	string num;
	stringstream ss;
	/*
	cin >> n >> k;
	cin >> num;
	while(flag){
		tmp = num.size() - k;
		for (int i = 0; i < tmp; i++){
			if (num[i] != num[i+k]){
				ss << num;
				ss >> x;
				ss.clear();
				x++;
				ss << x;
				ss >> num;
				break;
			}
			if (i == tmp-1){
				cout << num.size() << "\n" << num;
			}
		}
	}*/
}

string ADD(string x){
	int i = x.size()-1;
	if (x[i] != '9'){
		x[i] += 1;
	}else{
		x[i] = '0';
		while(x[--i] == '9'){
			
			x[i] = '0';
			if (i == 0){
				return '1' + x;
			}
		}
		x[i] += 1;
	}
	return x;
}

bool aIsBig(string a, string b){
	if (a.size() > b.size()){
		return 1;
	}else if (a.size() == b.size()){
		if (a > b){
			return 1;
		}else{
			return 0;
		}
	}else{
		return 0;
	}
}
