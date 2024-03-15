//CSES COIN COMBINATIONS II

#include <bits/stdc++.h>

using namespace std;

#define INF 1000000000
#define ll long long

int main(){
    int n, sum;
    cin >> n >> sum;

    ll coins[n];
    for(int i=0;i<n;i++){
        cin >> coins[i];
    }
    
    ll count[sum+1] = {0};
    count[0] = 1;

    for (int c = 0; c < n; c++) {

        for (int x=1; x<=sum; x++) {

            if (x-coins[c] >= 0) { 

                count[x] += count[x-coins[c]];                
                count[x] %= INF+7;
            }
            
        }
        //cout<<endl;
    }

    cout << count[sum] << endl;
    return 0;
}

//4        
//1 1 1 1
//2 1 1
//1 1 2
//1 2 1
//2 2
//2 2
//3 1
//1 3
//4

//5
//1 1 1 1 1
//2 1 1 1
//1 1 1 2
//1 2 1 1
//1 1 2 1
//2 2 1
//2 1 2
//1 2 2
//3 1 1
//1 3 1
//1 1 3
//2 3
//3 2
//4 1
//1 4
// 5