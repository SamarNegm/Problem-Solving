#include<bits/stdc++.h>
using namespace std;
const int limit = 2000000;
 void prime_divisors(int n) {
	vector<int> ret;
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			ret.push_back(i),cout<<i<<endl;;
			while (n % i == 0) n /= i;
		}
	}
	if (n != 1) ret.push_back(n);//0,cout<<n;

}
int main()
{
prime_divisors(60);
	return 0;
}
