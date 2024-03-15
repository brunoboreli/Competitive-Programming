#include <bits/stdc++.h>
 
using namespace std;
 
int fat(int n){
    if(n==1){
        return 1;
    }
 
    return (fat(n-1) * n);
}
 
 
int main(){
  
  long long s,all,casas,res,neg;
  long long n=1;
 
  cin >> s;
  
  //cout << n << s;
  while(n<=s){
 
    casas = n*n;
 
    all = (casas*(casas-1))/2;
 
    neg = 4*((n-1)*(n-2));
 
 
    res = all - neg;
 
    cout << res << endl;
 
    n++;
  }
 
  return 0;
}