#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
  
  long long n,x,y,aux,diagposition;
  cin >> n;
 
  while(n){
    cin >> x >> y;
 
    aux = max(x,y);
 
    diagposition = 1;
    diagposition += aux * (aux-1);
    
    
    if(aux%2 == 0){
      
      //coluna
      if((x-y) > 0){
        diagposition+=aux-y;
 
      }
      //linha
      else{
        diagposition-=aux-x;
      }
    
    }
    else{
 
      //coluna
      if((x-y) > 0){
        diagposition-=aux-y;
      }
      //linha
      else{
        diagposition+=aux-x;
      }
 
    }
    
 
 
    cout << diagposition << endl;
 
    n--;
  }
 
 
  return 0;
}