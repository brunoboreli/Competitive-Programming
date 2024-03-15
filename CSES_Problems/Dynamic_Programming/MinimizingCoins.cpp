//CSES MINIMIZING COINS
#include <bits/stdc++.h>

using namespace std;

#define INF 1000000000
#define ll long long

int main(){

    int n, sum;
    cin >> n >> sum;

    int coins[n];
    for(int i = 0; i < n; i++){
        cin >> coins[i];
    }

    ll value[sum];
    value[0] = 0;
    for(int x=1;x<=sum;x++){
        value[x] = INF;

        for(auto c : coins){
            if(x-c>=0){
                value[x] = min(value[x],value[x-c]+1);
            }
        }  
    }

    if(value[sum] == INF){
        cout << -1 << endl;
    }
    else{
        cout << value[sum] << endl;
    }
    


    return 0;
}