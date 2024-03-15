//CSES BOOKSHOP
#include <bits/stdc++.h>

using namespace std;

int knapsackMax(int capacity, int W[], int V[],int N){

    int dp[N+1][capacity+1] = {0};
    int w,v;

    for(int i=0;i<=capacity;i++){
        dp[0][i] = 0;
    }

    for(int i=1;i<=N;i++){

        w = W[i-1];v=V[i-1];

        for(int j=1;j<=capacity;j++){

            dp[i][j] = dp[i-1][j];

            if(j >= w && dp[i-1][j-w]+v>dp[i][j]){
                dp[i][j] = dp[i-1][j-w]+v;
            }
        }
    }

    return dp[N][capacity];
}



int main(){

    int n,k;cin>>n>>k;

    int bag[n];
    int w[n];

    for(int i=0;i<n;i++){
        cin >> w[i];
    }
    for(int i=0;i<n;i++){
        cin >> bag[i];
    }

    /*for(int i=0;i<n;i++){
        cout << bag[i] << " ";
    }
    cout << endl;
    for(int i=0;i<n;i++){
        cout <<  w[i] << " ";
    }*/

    cout << knapsackMax(k,w,bag,n) << endl;

    return 0;
}