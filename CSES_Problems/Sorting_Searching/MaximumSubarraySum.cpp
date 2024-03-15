#include <bits/stdc++.h>

using namespace std;

#define ll long long
 
 
int main(){
    int n;
    cin >> n;

    vector<ll> arr;

    ll sum = -1000000010, best = -1000000010,aux;
    for(int i=0;i<n;i++){
        cin >> aux;
        arr.push_back(aux);

        sum = max(arr[i],sum+arr[i]);
        best = max(sum,best);
    }

    cout << best << endl;
	
	
 return 0;
}