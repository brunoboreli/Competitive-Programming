#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
	
	vector<char> vet;
	char c;
	
	while(cin >> c){
		vet.push_back(c);
	
	}
	int len = vet.size();
 
 
	long long best = 1,aux = 1;
	
	for(int i=0;i<len;i++){
	
		if((i>0) && (vet[i]==vet[i-1])){
			aux++;
		}
		else{
			if(aux > best){
				best = aux;
			}
			aux = 1;
		}
	}
	
	if(aux > best){
	   best = aux;
	}
	
	cout << best << endl;
	
 
return 0;
}