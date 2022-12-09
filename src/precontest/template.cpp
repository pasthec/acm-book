#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(v) (int)((v).size())
#define pb push_back
#define int long long

template<typename T>
void chmax(T &x, const T &v) { if (x < v) x = v; }
template<typename T>
void chmin(T &x, const T &v) { if (x > v) x = v; }

void dbg_out() { cout << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
	cout << ' ' << H;
	dbg_out(T...);
}

#ifdef DEBUG
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define rep(i, a, b) for(int i = (a); i < (b); i++)

using vi = vector<int>;

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
}
