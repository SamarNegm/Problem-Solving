#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool comp(int a, int b) {
	return a > b;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	ll n, k;
	cin >> n >> k;
	if (k == 1) return cout << n, 0;

	 long long res = 1;
	for (int i = 0;  (1ll<<i) <=n; i++) {
		res |=1ll <<i;
		cout << res<<"  "<<i<<endl;

	}

	cout << res<<endl;
	//cout<<(k);
}

