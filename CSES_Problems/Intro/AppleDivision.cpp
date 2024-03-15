//APPLE DIVISION
#include <bits/stdc++.h>

using namespace std;


void search(int k,int n,vector<int> vet,long long mainsum);
vector<int> subset;
long long mindif = 1000000000;
long long somaux = 0,somaux2,auxcont;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    long long w,soma=0;
    vector<int> apples;

    cin >> n;

    

    for(int i=0;i<n;i++){
        cin>>w;
        apples.push_back(w);
        soma+= w;
    }

    search(1,n,apples,soma);

    cout << mindif << endl;
    

    return 0;
}

void search(int k,int n,vector<int> vet,long long mainsum) {
    if (k == n+1) {
        if(subset.size() < n){
            somaux = 0;
            somaux2 = mainsum;
            for(int i=0;i<subset.size();i++){
                somaux  +=vet[subset[i]-1];
                somaux2 -=vet[subset[i]-1];
                //cout << subset[i] << " ";
            }
            auxcont = somaux2-somaux;
            if(auxcont<0){
                auxcont *= (-1);
            }
            //cout << endl;
            //cout << auxcont << " soma: " << somaux2 << " soma subset: " << somaux<< endl;
            
            if((auxcont) < mindif){
                mindif = auxcont;
            }
            //cout << " mindif: " << mindif << endl;

        }
       

    } else {
        // include k in the subset
        subset.push_back(k);
        search(k+1,n,vet,mainsum);
        subset.pop_back();
        // don’t include k in the subset
        search(k+1,n,vet,mainsum);
    }
}
