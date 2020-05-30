#include <bits/stdc++.h>

using namespace std;

int n, a, b, c;
long long mem[5000];

long long solve(int rem = n){
	if(rem<0)	return -1e12;
	if(rem ==0)  return 0;
	long long &ret = mem[rem] ;
	if(~ret) return ret;
    ret = max(solve(rem-a)+1 , max(solve(rem-b)+1, solve(rem-c)+1));
	return ret;
}

int main(){
	memset(mem, -1 , sizeof mem);
	scanf("%d %d %d %d", &n, &a, &b, &c);
	printf("%lld\n", solve());
  return 0;
}
