#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll ;
 
 
int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll n;
	//usamos Legendre's Formula      
	cin >> n;
	
	ll pf = 5, res=0;
	
	while(pf <= n){
	      res += n / pf;
	      pf *=5;	
	}
	
	cout << res << endl;
	
	
	
	
	
  return 0;
}