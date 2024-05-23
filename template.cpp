#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define fab(a,b,i) for(ll i=a;i<b;i++)
#define fabs(a,b,i) for(ll i=a;i>=b;i--)
#define db double
#define endl "\n"
#define F first
#define S second
#define MOD 1000000007
typedef vector<ll> vi;
typedef set<ll> si;
typedef pair<ll, ll> pi;
typedef map<ll, ll> mi;

#define quick ios_base::sync_with_stdio(false);cin.tie(NULL);
ll add(ll x, ll y) {ll res = x + y; return (res >= MOD ? res - MOD : res);}
ll mul(ll x, ll y) {ll res = x * y; return (res >= MOD ? res % MOD : res);}
ll sub(ll x, ll y) {ll res = x - y; return (res < 0 ? res + MOD : res);}
ll power(ll x, ll y) {ll res = 1; x %= MOD; while (y) {if (y & 1)res = mul(res, x); y >>= 1; x = mul(x, x);} return res;}
ll mod_inv(ll x) {return power(x, MOD - 2);}

ll gcd(ll a, ll b){
	if (b == 0) return a;
	return gcd(b, a % b);}

ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b;}

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}


void solve() {
    
}









int main()
{ 
    quick;

	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
	t=1;
	cin >> t;
	while(t--) {
	    solve();
	}
    
    return 0;
}