#include <bits/stdc++.h>

using namespace std;

char mat[1001][1001];
int countRoom = 0;

bool isValid(int i,int j,int n,int m){
    if(i>=0 && i<n && j>=0 && j<m){
        if(mat[i][j] == '.'){
            return true;
        }
    }

    return false;
}

void dfs(int i,int j,int n, int m) {

    if (mat[i][j] == '*') return;

    //cout << mat[i][j] <<" ";

    mat[i][j] = '*';

    // process node s
    if(isValid(i+1,j,n,m)){
        dfs(i+1,j,n,m);
    }
    if(isValid(i-1,j,n,m)){
        dfs(i-1,j,n,m);
    }
    if(isValid(i,j+1,n,m)){
        dfs(i,j+1,n,m);
    }
    if(isValid(i,j-1,n,m)){
        dfs(i,j-1,n,m);
    }    

    //cout << endl;
    
}

int main(){

    int n,m;cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> mat[i][j];
        }
    }

    /*for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }*/

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j] == '.'){
                dfs(i,j,n,m);
                countRoom ++;
            }
        }
    }


    cout << countRoom << endl;

    return 0;
}