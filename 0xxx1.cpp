
#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second
#define pb push_back
#define ll long long
#define F(i, n) for (int i = 0; i < n; i++)
#define all(x)(x).begin(), (x).end()
#define sz(x) ((int) (x).size())
#define rep(i, a, b) for(int i = (a); i <= (b); i++)
#define show(arr) { for (auto x: arr) cout << x << " "; cout << '\n'; }
#define show_(arr, n) F(i, n) show(arr[i])
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math")


template<typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;

using ld = long double;
using vi = vector <int>;
using mi = map <int, int>;
using pii = pair <int, int>;

const int N = 100005;
const int MOD = 1e9 + 7;

inline int pow_(ll a, int n, int p=MOD){
int r=1;while(n){if(n&1)r=r*a%p;n>>=1;a=a*a%p;}return r;}
inline int inv_(int a) {return pow_(a,MOD-2, MOD);}
inline int add(int a, int b){a+=b;if(a>=MOD)a-=MOD;return a;}
inline void adds(int& a, int b){a+=b;if(a>=MOD)a-=MOD;}
inline int mul(int a, int b){return a*1ll*b%MOD;}
inline void muls(int& a, int b){a=a*1ll*b%MOD;}
inline int sub(int a, int b){a-=b;if(a<0)a+=MOD;return a;}




void solve() {
	int n;
	cin>>n;
	string s;
	cin>>s;

	int windo_incr = 0, window = 0,count = 0;

	for(int i=0;i<n;i++)
	{
		if(s[i] == '0')
		{
			window++;
			windo_incr++;
		}
		else
		{
			count += windo_incr;
		}
	}
	cout<<count % MOD<<endl;
}
int32_t main() {

#ifndef ONLINE_JUDGE
	//for getting input from input1.txt
	freopen("input1.txt", "r", stdin);
	//for writing output to output1.txt
	freopen("output1.txt", "w", stdout);
#endif

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin>>t;
	while(t--)
	solve();

	return 0;
}