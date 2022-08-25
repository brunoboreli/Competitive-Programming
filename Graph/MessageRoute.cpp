#include <bits/stdc++.h>

using namespace std;

#define N 100001

vector<int> adj[N+1];
bool visited[N+1];
int dist[N+1],path[N+1];
queue<int> q;


bool bfs(int i,int n){

    for(int i=0;i<=n;i++){
        visited[i] = false;
        dist[i] = 0;
    }
    
    visited[i] = true;
    dist[i] = 0;
    q.push(i);

    while(!q.empty()){
        int s = q.front();q.pop();
        
        //cout << s << " ";


        
        for (auto u : adj[s]) {
            if(visited[u]){continue;}
            //cout << "->" << u << " ";
            visited[u] = true;
            dist[u] = dist[s]+1;
            path[u] = s;

            q.push(u);

            if(u == n){
                return true;
            }
        }
        //cout << endl;
    }

    return false;
}

int main(){

    int n,m;cin>>n>>m;
    int a,b;

    for(int i=0;i<m;i++){
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    
    if(bfs(1,n)){
        //imprimir numeros de nós no caminho
        cout << dist[n]+1 << endl;

        int i = n;
        vector<int> caminho;
        caminho.push_back(i);
        while(i != 1){
            caminho.push_back(path[i]);
            i = path[i];
        }

        for(int i=caminho.size()-1;i>=0;i--){cout << caminho[i] << " ";}
        cout << endl;
    }
    else{
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}