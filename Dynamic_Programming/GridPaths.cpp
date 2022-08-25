//CSES DP GRID PATHS
#include <bits/stdc++.h>

using namespace std;

#define INF 1000
#define ll long long

ll globalCount = 0;

int main(){
    int n;cin>>n;
    
    int mod = 1e9+7;

    char grid[INF][INF];
    //int sol[INF][INF];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> grid[i][j];
        }
    }

    vector<vector<int>> dp(n,vector<int>(n,0));
    dp[0][0]=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           
            if(grid[i][j] == '*'){
                //cout << "a " << i << j<< endl;
                dp[i][j] = 0;
            }
            else{
                if(j>0){
                    dp[i][j] += dp[i][j-1];
                }
                dp[i][j] %= mod;
                
                if(i>0){
                    dp[i][j] += dp[i-1][j];
                }
                dp[i][j] %= mod;
            }
            
        }
    }
    

    cout << dp[n-1][n-1] << endl;

    return 0;
}
