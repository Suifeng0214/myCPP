//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
bool no=0;
int counts=0, ouo=0, cntouo=0;
struct trie{
	int cnt;
	trie *nxt[2];
	trie(){
		cnt = 0;
		memset(nxt, 0, sizeof nxt);
	}
};
trie *root = new trie();
void insert(string s){
	trie *node = root;
	for (auto i : s){
		if (!node->nxt[i-'0']) node->nxt[i-'0'] = new trie(), ouo++;
		node = node->nxt[i-'0'];
		if (node->cnt != 0 || (cntouo == s.size()-1 && ouo==0)) no = 1;
		cntouo++;
	}
	node->cnt++;
}

void erase(trie *&node){
	for (int i = 0; i <= 1; i++){
		if (node->nxt[i]) erase(node->nxt[i]);
	}
	delete node;
}
signed main() 
{ 
//	freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string s;
	while (cin >> s){
		ouo=0; cntouo=0;
		if (s == "9"){
			erase(root), counts++;
			root = new trie();
			if (no) cout << "Set "<< counts <<" is not immediately decodable\n"; 
			else cout << "Set "<<counts<<" is immediately decodable\n";
			no = 0;
		}
		else{ 
			insert(s);
		}
	}
} 


