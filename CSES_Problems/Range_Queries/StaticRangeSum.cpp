#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n,m,aux; cin >> n >> m;

    vector<long long> arr,arraux;
    for(int i=0; i<n; i++){
        cin >> aux;
        arr.push_back(aux);
    }
    arraux.push_back(arr[0]);
    for(int i=1; i<n; i++){
        arraux.push_back(arr[i] + arraux[i-1]);
    }

    long long a,b;
    while(m--){
        cin >> a >> b;
        a--;b--;
        //cout << a << " " << b << endl;
        if(a == 0){
            cout << arraux[b] << endl;
        }
        else{
            cout << arraux[b] - arraux[a-1] << endl;
        }
        
    }

/*
    for(int i=0; i<n; i++){
        cout << arraux[i] << " ";
    }
    cout << endl;*/

    return 0;
}