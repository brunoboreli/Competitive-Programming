#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll ;
 
int binaryconvert(int i, int n, int vet[]);
 
int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	
	cin >> n;
	int tam = pow(2,n);
	
	int vet[n] = {0};
	
	for(int i=0;i<tam;i++){
		binaryconvert(i,n,vet);	
		
		
		for(int i=0;i<n;i++){
			if(i==0){
				cout << vet[i];	
			}
			else if(vet[i-1] != vet[i]){
				cout << 1;					
			}
			else if(vet[i-1] == vet[i]){
				cout << 0;	
			}
		}
		cout << endl;
	}
 
	
	/*
	for(int i = 0; i<n ;i++){
		cout << vet[i] << endl;		
	}*/
	
 
	
	
  return 0;
}
 
int binaryconvert(int i, int n, int* vet){
	while(i!=0){
		if(i%2 == 0){
			vet[n-1] = 0;
		}
		else if(i%2 !=0){
			vet[n-1] = 1;
		}
		
		
		n = n -1;
		i = i / 2;
	}
	
	return 0;
}