//PERMUTATIONS
#include <bits/stdc++.h>

using namespace std;


int main(){

	int n;
	cin >> n;
	
	vector<int> par,impar,res;
	
	if(n==3 || n==2){
		cout << "NO SOLUTION\n";
		return 0;
	}
	
	for(int i=1;i<=n;i++){
		if(i%2 == 0){
			par.push_back(i);
		}
		else{
			impar.push_back(i);
		}
	}
	
	res = par;

	for(int i=0;i<impar.size();i++){
		res.push_back(impar[i]);	
	}
	
	int k = res.size();
	for(int i=0;i<k-1;i++){
		cout << res[i] << " ";
	}
	
	cout << res[k-1] << endl;


  return 0;
}
