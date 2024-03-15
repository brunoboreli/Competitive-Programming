#include <bits/stdc++.h>

using namespace std;

#define ll long long
 
 
int main(){
    int n;
    cin >> n;

    vector<ll> arr;
    ll aux;
    for(int i=0;i<n;i++){
        cin >> aux;
        //sum += aux;
        arr.push_back(aux);
    }

    sort(arr.begin(),arr.end());

    ll meio = floor(n/2);
    ll cost = 0;

    ll numid = arr[meio];
    for(int i=0;i<n;i++){
        if(arr[i] < numid){
            cost += (numid - arr[i]) ;
        }
        
        if(arr[i] > numid){
            cost += (arr[i] - numid);
        }
    }

    cout << cost << endl;

	
	
 return 0;
}