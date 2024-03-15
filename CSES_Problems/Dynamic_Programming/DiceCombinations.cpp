//Coin numbers problem (menor construção) DP
//CSES - DICE COMBINATIONS
#include <bits/stdc++.h>

using namespace std;

#define INF 1000000000

int main(){
    int n;
    cin >> n;

    int coins[6] = {1,2,3,4,5,6};

    long long count[n+1] = {0};
    count[0] = 1;

    for (int x = 1; x <= n; x++) {
        for (auto c : coins) {
            if (x-c >= 0) {
                count[x] += count[x-c];
                count[x] %= INF+7;
            }
        }
    }

    cout << count[n] << endl;
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