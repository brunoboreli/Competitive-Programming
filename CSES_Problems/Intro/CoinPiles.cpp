#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll ;
 
 
int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll n, a, b, x, y;
	cin >> n;
	
	while(n){
		cin >> a >> b;
		
		
		if((2*a-b) >=0 && ((2*a-b) % 3) == 0 && (2*b-a) >=0 && (2*b-a)%3 ==0 ){
			cout << "YES" << endl;	
		}
		else{
			cout << "NO" << endl;	
		}
	
	n--;	
	}
	
	
	
	
  return 0;
}