//DISTINCT NUMBERS
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main(){
 
	ll n,j;
	cin >> n;
	
	vector<ll> vet;
	
	for(ll i=0; i<n;i++){
		cin >> j;
		vet.push_back(j);
	}
	
	sort(vet.begin(),vet.end());
	
	ll k = 0;
	for(ll i=0;i<vet.size();i++){
		if(vet[i] != vet[i+1]){
		   k++;	
		}	
	}
	
	
	cout << k << endl;
	
 return 0;
}