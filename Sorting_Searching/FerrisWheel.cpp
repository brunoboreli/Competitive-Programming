//CSES - FERRIS WHEEL
#include <bits/stdc++.h>

using namespace std;

#define ll long long
 
 
int main(){
    int n,x,aux;

    cin >> n >> x;

    vector<ll> vet;

    for(int i=0;i<n;i++){
        cin >> aux;
        vet.push_back(aux);
    }

    sort(vet.begin(),vet.end());


    ll count = 0,s;
    ll i=0,j=n-1;

    while(i<=j){
        s = vet[j] + vet[i];
        if(s <= x){
            count++;
            j--;i++;
        }
        else{
            if(vet[j] > vet[i]){
                count++;
                j--;
            }
            else if(vet[j] == vet[i]){
                if(j==i){
                    count++;
                }
                else{
                    count+=2;
                }
                
                j--;i++;
            }
            else{
                count++;
                i++;
            }
        }
    }

    
    cout << count << endl;
    
	
	
 return 0;
}