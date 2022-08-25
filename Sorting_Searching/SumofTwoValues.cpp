#include <bits/stdc++.h>

using namespace std;

#define ll long long
 
 
int main(){
    int n;
    ll s,aux,dif;
    cin >> n >> s;

    vector<ll> arr;
    map<ll,int> difval;

    for(int i=0;i<n;i++){
        cin >> aux;

        arr.push_back(aux);

        if(aux > s){
            dif = aux-s;
        }
        else{
            dif = s-aux;
        }

        difval[dif] = i;
    }

    int sent;
    for(int i=0;i<arr.size();i++){
        if(difval.count(arr[i])){
            sent = difval[arr[i]];
            //cout << arr[sent] << " " << arr[i] << endl;
            if((i != sent) && (arr[sent] + arr[i]) == s){
                cout << i + 1 << " " << sent + 1 << endl;
                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE\n" << endl;
	
 return 0;
}