//APARTMENTS
#include <bits/stdc++.h>

using namespace std;

#define ll long long
 
 
int main(){
    
	ll n,m,k,aux;
    vector<ll> need,ap;

    cin >> n >> m >> k;

    for(int i=0;i<n;i++){
        cin >> aux;
        need.push_back(aux);
    }
    for(int i=0;i<m;i++){
        cin >> aux;
        ap.push_back(aux);
    }

    sort(need.begin(),need.end());
    sort(ap.begin(),ap.end());

    ll count = 0,i=0,j=0;

    while(i<n && j<m){
        if(abs(need[i] - ap[j]) <=k){
            count++;
            i++;j++;
        }
        else{
            if(ap[j] > need[i]+k){
                i++;
            }
            else{
                j++;
            }
        }

    }

    cout << count << endl;
    
	
 return 0;
}