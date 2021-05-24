#include <bits/stdc++.h>
using namespace std;
#define SagiriMywife ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int cnt = 1;
struct trie{
	trie *nxt[26];
	int ans;
	trie(){
		ans = 0;
		memset(nxt, 0, sizeof nxt);
	}
};

trie *root;

void insert(string s){
	trie *node = root;
	for (auto i : s){
		if (!node->nxt[i-'a']) node->nxt[i-'a'] = new trie();
		node = node->nxt[i-'a'];
	}
	if (node->ans == 0){
		node->ans = cnt++;
		cout << "New! " << node->ans << "\n";
	}else{
		cout << "Old! " << node->ans << "\n";
	}
}

void erase(trie *&node){
	for (int i = 0; i < 26; i++){
		if (node->nxt[i])
			erase(node->nxt[i]);
	}
	delete node;
}
signed main(){
	SagiriMywife
	freopen("gen.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	int n;
	while(cin >> n){
		root = new trie();
		cnt = 1;
		while(n--){
			string s;
			cin >> s;
			insert(s);
		}
		erase(root);
	}
}
