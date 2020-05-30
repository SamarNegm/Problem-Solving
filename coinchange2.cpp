#include <bits/stdc++.h>

using namespace std;

const int N = 1e2+5, M = 1e4, OO = 0x3f3f3f3f;
int a[3];
int n = 3;
int value;

long long mem[3][N];

long long solve(int last = n-1, int rem = value){
	if(rem < 0)	return 0;
	if(rem == 0)	return 1;
	if(last < 0)	return 0;
	long long & ret = mem[last][rem];
	if(~ret)	return ret;
	return ret = solve(last-1, rem) + solve(last, rem-a[last]);
}

vector<int> ans;

void print(int last = n-1, int rem = value){
	if(rem < 0)	return;
	if(rem == 0){
		for(int i =0;i< ans.size();i++)	printf("%d ", ans[i]);
		puts("");
		return;
	}
	if(last < 0)	return;
//	long long ret = mem[last][rem];
//	if(~ret)	return ret;
	if(solve(last, rem-a[last])){
		ans.push_back(a[last]);
		print(last, rem-a[last]);
		ans.pop_back();
	}
	if(solve(last-1, rem)){
		print(last-1, rem);
	}
}

int main(){
	cin>>value;
	cin>>a[0]>>a[1]>>a[2];
	sort( a,a+3);
	memset(mem, -1, sizeof mem);
	cout<<solve(3,value)<<"\n";
	print();
	return 0;
}
