/*
TASK: comehome
LANG: C++11
*/
#include <bits/stdc++.h>

using namespace std;

const int N = 2e2 + 5, M = 1e5 + 5, OO = 0x3f3f3f3f;
const double EPS = 1e-9;

int head[N], nxt[M], to[M], cst[M];
int ne;

void init(){
	memset(head, -1, sizeof head);
	ne = 0;
}

void addEdge(int f, int t, int c){
	nxt[ne] = head[f];
	to[ne] = t;
	cst[ne] = c;
	head[f] = ne++;
}

void addBiEdge(int a, int b, int c){
	addEdge(a, b, c);
	addEdge(b, a, c);
}

int dis[N];
int n;

void Dijkstra(int src){
	memset(dis, OO, sizeof dis);
	priority_queue<pair<int, int> > q;
	q.push({0, src});
	dis[src] = 0;
	while(q.size()){
		int d = -q.top().first, u = q.top().second;
		q.pop();
		if(dis[u] != d)	continue;
		for(int k = head[u] ; ~k ; k = nxt[k]){
			int v = to[k], c = cst[k];
			int dd = d+c;
			if(dis[v] > dd){
				dis[v] = dd;
				q.push({-dd, v});
			}
		}
	}
}

int m, c;
char a, b;
int mini = OO;

int main(){
	freopen("comehome.in", "rt", stdin);
	freopen("comehome.out", "wt", stdout);
	scanf("%d", &m);
	n = 'z'+1;
	init();
	while(m--){
		scanf(" %c %c %d", &a, &b, &c);
		addBiEdge(a, b, c);
	}
	Dijkstra('Z');
	for(char c = 'A' ; c < 'Z' ; ++c){
		if(dis[c] < mini){
			mini = dis[c];
			a = c;
		}
	}
	printf("%c %d\n", a, mini);
	return 0;
}
/*
25
m Z 1000
A m 1000
B m 999
C m 998
D m 997
E m 996
F m 995
G m 994
H m 993
I m 992
J m 991
K m 990
L m 989
M m 988
N m 987
O m 986
P m 985
Q m 984
R m 983
S m 982
T m 981
U m 980
V m 979
W m 978
X m 977
*/

