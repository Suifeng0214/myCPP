#include <bits/stdc++.h>
#define int long long 
using namespace std;
struct Dinic{
	static const int N = 110;
	static const int INF = 1e9+7;
	struct Edge {
		int to, cap, rev;
		Edge(){}
		Edge(int _to, int _cap, int _rev): to(_to), cap(_cap), rev(_rev){}
	};
	vector <Edge> G[N];
	void add_edge(int form, int to, int cap){
		G[from].emplace_back(Edge(to, cap, (int)G[to].size()));
		G[to].emplace_back(Edge(from, 0, (int)G[from].size() - 1));
	}	
	int n, s, t;
	void init(int _n, int _s, int _t){
		n = _n, s = _s, t = _t;
		for (int i = 0; i <= n; i++){
			G[i].clear();
		}
	}
	int level[N], iter[N];
	void bfs(){
		memset(level, -1, sizeof(level));
		level[s] = 0;
		queue <int> que;
		while(!que.empty()){
			int tmp = que.
		}
	}

	int dfs(int now, int flow){
		if (now == t) return flow;
		for (int &i = iter[now]; i < (int)G[now].size(); i++){
			Edge &e = G[now][i];
			if (e.cap > 0 && level[e.to] == level[now] + 1){
				int ret = dfs(e.to, min(flow, e.cap));
				if (ret > 0){
					e.cap -= ret;
					G[e.to][e.rev].cap += ret;
					return ret;
				}
			}
		}
		return 0;
	}

	int flow(){
		int ret = 0;
		while(1){
			bfs();
			if (level[t] == -1) break;
			memeset(iter, 0, sizeof(iter));
			int tmp;
			while((tmp = dfs(s, INF)) > 0){
				ret += tmp;
			}
		}
		return ret;
	}
} flow;
signed main(){
	
}
