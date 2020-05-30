#include <bits/stdc++.h>

using namespace std;

const int N = 2e4 + 5, M = 2e6 + 5, OO = 0x3f3f3f3f;

int ne, head[N], nxt[M], to[M];
int n, m;
pair<int, int> A[M];
int vis[N];			//0 = not visited, -1 = under-processing, 1 = finished processing
vector<int> ans;

void init(){
	memset(head+1, -1, n*sizeof head[0]);
	ne = 0;
}

void addEdge(int f, int t){
	nxt[ne] = head[f];
	to[ne] = t;
	head[f] = ne++;
}

bool DFS(int u){
	if(vis[u]){cout<<u<<"  "<<vis[u]<<"\n";return vis[u] == 1;};
	vis[u] = -1;
	cout<<" u "<<u<<"\n";
	for(int k = head[u] ; ~k ; k = nxt[k]){
		int v = to[k];
		if(!DFS(v)){cout<<"ops\n";	return 0;
	}}
	vis[u] = 1;
	ans.push_back(u);
	return 1;
}

int main(){
	scanf("%d %d", &n, &m);
	init();
	bool f = 1;
	for(int i = 0 ; i < m ; ++i)
		scanf("%d %d", &A[i].first, &A[i].second);
	sort(A, A+m);
	for(int i = 0 ; i < m ; ++i)
		addEdge(A[i].first, A[i].second);
	for(int i = n ; i >= 1 ; --i)
		if(!vis[i])
			if(!DFS(i))	return puts("Sandro fails."), 0;
	for(int i = n-1 ; ~i ; --i)
		printf("%d%c", ans[i], " \n"[!i]);
	return 0;
}
