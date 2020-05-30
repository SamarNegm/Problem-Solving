#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isPrime(ll n){
  if(n < 2)
    return 0;
  for(ll i=2; i*i<=n; i++)
    if(n % i == 0)
      return 0;
  return 1;
}

vector<ll> getDivisors(ll n){
  vector<ll> ret;
  for(int i=1; i*i<=n; i++){
    if(n % i == 0){
      ret.push_back(i);
      if(n != i * i)
        ret.push_back(n / i);
    }
  }
  return ret;
}

vector<ll> getFactors(ll n){
  vector<ll> ret;
  ll tmp = n, cnt = 1;
  for(ll i=2; i*i<=n; i++){
    ll x = 1;
    while(tmp % i == 0){
      ret.push_back(i);
      tmp /= i;
      ++x;
    }
    cnt *= x;
  }
  if(tmp != 1){
    ret.push_back(tmp);
    cnt *= 2;
  }
  return ret;
}

const int N = 1e6;
bool f[N + 5];
vector<int> primes;

void seive(){
  f[0] = f[1] = 1;
  for(int i=1; i<=N; i++){
    if(f[i])
      continue;
    primes.push_back(i);
    for(ll j=(ll)i*i; j<=N; j+=i)
      f[j] = 1;
  }
}

ll GCD(ll a, ll b){
  return b ? GCD(b, a % b) : a;
}

ll LCM(ll a, ll b){
  return a / GCD(a, b) * b;
}
long long pow(int c)
{
    long long ans=1;
    while(c)
        ans*=2;
    return ans;
}
int c0,c1,ans,c;
int main()
{
 string s,s2;
 cin>>s>>s2;
 if(s.length()%2==1)
 {
     puts("-1");
     return 0;
 }
 for(int i=0;i<s.length();i++)
 {

 }
 if(c0==c1&&c==0)
    ans=1;
 else
    ans=((((s.length()-c0))/2)+(((s.length()-c1))/2))/2/pow(c);
 cout<<fixed<<setprecision(12)<<ans;

  return 0;
}
