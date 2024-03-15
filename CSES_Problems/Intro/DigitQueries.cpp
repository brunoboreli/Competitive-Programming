//DIGIT QUERIES
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
 
    long long k,da=1,db=9,numd;
    long long numini,numfim,mid,digmid=0,auxin,auxfim,aux,bestnum;
    long long posinnum;
    string numres;
 
    cin >> n;
 
    while(n){
        cin>>k;
 
        da=1;
        db=9;
        numd=da*db;
        while((numd) < k){
            
            da++;
            db*=10;
 
            numd+=da*db;      
        }
 
        numd -=da*db;
 
        //armazena valores do inicio e fim do bloco
        numini = pow(10,da-1);
        numfim = pow(10,da)-1;
 
        //cout << "num inicio: " << numini << " numfim: " << numfim << " digitos: " << da <<
        //" nDigitos bloco anterior: " << numd << endl;
 
        //valores inicial e final para busca binaria
        auxin = numini;
        auxfim = numfim;
 
        digmid;
        bestnum = 0;
        
        while( auxin <= auxfim  ){
 
            mid = (auxfim+auxin)/2;
 
            aux = ((mid - numini) * da) + (numd +1);
 
            if(aux <= k){
                
                if(mid > bestnum){
                    bestnum = mid;
                    digmid = aux;
                }
 
                auxin = mid+1;
                
            }
            else{
                auxfim = mid-1;
            }
 
        }
 
        //cout << "Numero: " << bestnum << " Numdig: " << digmid << endl;
 
        posinnum = k - digmid;
        numres = to_string(bestnum);
        //cout << posinnum << endl;
 
 
        //cout << bestnum << endl;
        cout << numres[posinnum] << endl;
 
        n--;
    }    
  return 0;
}