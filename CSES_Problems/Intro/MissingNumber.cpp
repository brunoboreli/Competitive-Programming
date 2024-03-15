//MISSING NUMBER
#include <bits/stdc++.h>

using namespace std;


int main(){
	
	long long soma;
	long long n,faltante,aux,sum=0;
	cin >> n;
	soma = ((1 + n) * n)/2 ;
	
	//cout << soma << endl;
	vector<int> vet;
	
	for(int i=0;i<n-1;i++){
		cin >> aux;
		
		sum += aux;		
	}
	
	faltante = soma - sum;
	
	cout << faltante << endl;
	

return 0;
}
