
#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5, M = 2e4 + 5, OO = 0x3f3f3f3f;
const double EPS = 1e-7;

long long mem[3][N],a[3];
int n = 3;

long long solve(int idx, int sum){
	if(sum < 0)	return 0;
	if(sum == 0)	return 1;
	if(idx == -1)	return 0;
	long long & ret = mem[idx][sum];
	if(ret != -1)	return ret;
	return ret = solve(idx-1, sum) + solve(idx, sum-a[idx]);
}

int main(){
	memset(mem, -1, sizeof mem);
	int q;
	cin>>q>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	cout << solve(2, q) << endl;
	return 0;
}
