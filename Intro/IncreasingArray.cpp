//INCREASING ARRAY
#include <bits/stdc++.h>

using namespace std;



int main(){
	
	long long n,aux;
	vector<long long> vet;
	
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> aux;
		vet.push_back(aux);
	}
	
	long long moves = 0,diff = 0;
	for(int i=0;i<n;i++){
		
		
		if(i>0 && vet[i]<vet[i-1]){
			diff = vet[i-1] - vet[i];
			
			
			vet[i] += diff;
			moves += diff;
			diff = 0;				
		}
		
		
		
		
	}
	

	
	cout << endl << moves << endl;
	
	
	


  return 0;
}
