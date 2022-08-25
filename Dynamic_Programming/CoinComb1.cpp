//CSES COIN COMBINATIONS I

#include <bits/stdc++.h>

using namespace std;

#define INF 1000000000

int main(){
    int n, sum;
    cin >> n >> sum;

    int coins[n];
    for(int i=0;i<n;i++){
        cin >> coins[i];
    }
    
    long long count[sum+1] = {0};
    count[0] = 1;

    for (int x = 1; x <= sum; x++) {
        for (int c=0;c<n;c++) {
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