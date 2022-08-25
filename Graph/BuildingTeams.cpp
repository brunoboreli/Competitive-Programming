#include <bits/stdc++.h>

using namespace std;

#define N 100001

vector<int> adj[N+1];
int visited[N+1] = {0};
queue<int> q;


bool bfs(int i,int n){

    int color = 1;    
    visited[i] = color;

    q.push(i);

    while(!q.empty()){
        int s = q.front();q.pop();

        if(visited[s] == 1){
            color = 2;
        }
        else{
            color = 1;
        }
        
        for (auto u : adj[s]) {
            if(visited[u] == visited[s]){return false;}
            else if(visited[u]){continue;}

            visited[u] = color;
            q.push(u);
        }
    }

    return true;
}

int main(){

    int n,m;cin>>n>>m;
    int a,b;

    for(int i=0;i<m;i++){
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bool flag = true;
    for(int i=1;i<=n;i++){
        if(visited[i] == 0){
            if(!bfs(i,n)){
                flag=false;
            }
        }
        
    }
    if(flag){
        for(int i=1;i<=n;i++){
            cout << visited[i] << " ";
        }
        cout << endl;
    }
    else{
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}