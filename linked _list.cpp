#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define fastIO \
	ios::sync_with_stdio(false); \
	cin.tie(NULL); \
	cout.tie(NULL); \
	cout.precision(numeric_limits<double>::max_digits10);

#define ll long long

int main() {
	fastIO;
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin>>n;
		vector< ll> a(n);
		ll mul=1;
		for(auto &i :a) {cin>>i; mul*=i;}
		map <ll,ll> mp;
		ll flg=0;
		for(auto i:a){
			mp[i]++;
			if(mp[i]>1) { flg=1; break;}
		}
		if(flg ) cout<<"YES\n";

		else cout<<"NO\n";
	}
	return 0;
}