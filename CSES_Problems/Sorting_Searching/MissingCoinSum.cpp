//CSES MISSING COIN SUM
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

    int n;cin>>n;
    ll aux;
    vector<ll> arr;
    for(int i=0;i<n;i++){
        cin>>aux;
        arr.push_back(aux);
    }

    sort(arr.begin(),arr.end());

    //1 2 2 7 9

    ll somaatual=0;
    for(int i=0;i<n;i++){
        if(somaatual+1 < arr[i]){ 
            break;
        }
        else{
            somaatual += arr[i];
        }
    }

    cout << somaatual+1 << endl;

    return 0;
}