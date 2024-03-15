#include <bits/stdc++.h>

using namespace std;

#define ll long long
 
 
int main(){
    
	int n,m;
    ll aux;

    cin >> n >> m;
    multiset<ll> price;

    for(int i=0;i<n;i++){
        cin >> aux;
        price.insert(aux);
    }

    for(int i=0;i<m;i++){
        cin >> aux;

        //acha o elemento imediatamente maior
        auto find  = price.upper_bound(aux);

        //se apontar para o inicio, evidentemente não haverá elementos
        if(find == price.begin() || price.size()==0){
            cout << -1 << endl;
        }
        else{
            //printa o elemento imediatamente inferior ou igual
            cout << *(--find) << endl;
            //apaga ingresso
            price.erase(find);

        }

        
    }



    
	
 return 0;
}