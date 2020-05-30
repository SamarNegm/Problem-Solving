#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 200021;



const int sievesize = (ll)1e6+10;
bool prime[sievesize+1];

ll n;
ll l;
ll r;
ll x;
ll a[N];
ll ans = 0;
#define lson l,mid,rt<<1
#define eps 1e-9
#define rson mid+1,r,rt<<1|1
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define oo INT_MAX
#define noo INT_MIN
int main(){
    cin >> n >> l >> r >> x;
    for(ll i=1; i<=n; i++) cin >> a[i];
    cout<<( 1<< n )<<" n "<<n<<endl;
    for(ll i=0; i < ( 1 << n ) ; i++){
        ll mmax = noo;
        ll mmin = oo;
        ll ct = 0;
        ll val = 0;
        bitset<32> obj(i); ct = obj.count();
        if(ct >= 2){
            for(ll j=0; j<n; j++){
                if(i & (1 << j)){
                    ll idx = n - j;
                    val += a[idx];
                    mmax = max( mmax , a[idx] );
                    mmin = min( mmin , a[idx] );
                }
            }
            if(val >= l && val <=r && mmax - mmin >= x) ans ++;
        }
    }
    cout << ans << endl;
    return 0;
}
