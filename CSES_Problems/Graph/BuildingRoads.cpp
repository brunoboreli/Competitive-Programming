#include <bits/stdc++.h>

using namespace std;

#define N 1000000

vector<int> adj[N+1];
bool visited[N+1] = {false};
int armCon[N+1] = {0};
int counter;

void dfs(int s){
    if(visited[s])return;

    visited[s]=true;

    armCon[counter] = s;
    //cout << s << " ";

    for(auto u : adj[s]){
        dfs(u);
    }
}


int main(){

    int n,m;cin>>n>>m;
    int a,b;

    for(int i=0;i<m;i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    counter=0;
    for(int i=1;i<=n;i++){
        if(visited[i] == false){
            counter++;
            dfs(i);
            //cout << endl;
        }
    }

    cout << counter - 1 << endl;
    for(int i=1;i<counter;i++){
        cout << armCon[i] <<" " << armCon[i+1]<<endl;
    }
    //cout << endl;


    

    return 0;
}