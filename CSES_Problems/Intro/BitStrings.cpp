#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll ;
 
 
int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll n;
	ll m = 1000000007;
	
	cin >> n;
 
	ll res = 1;
	for(ll i = 0;i<n;i++){
		res = res * 2 % m;
	}
	
	cout << res%m << endl;
	
  return 0;
}