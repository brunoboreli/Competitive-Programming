#include <bits/stdc++.h>

using namespace std;

char mat[1001][1001];
pair<int,int> path[1001][1001];
vector<pair<int,int>> moves = {{1,0},{-1,0},{0,1},{0,-1}};


bool isValid(int i,int j,int n,int m){
    if(i>=0 && i<n && j>=0 && j<m){
        if(mat[i][j] == '.' || mat[i][j] == 'B'){
            return true;
        }
    }

    return false;
}

int bfs(int i, int j, int n, int m){
    
    queue<pair<int,int>> q;
    //colocar posição incial na fila
    q.push({i,j});
    //variaveis para tomar linha e coluna
    int x,y,mvx,mvy;

    while(!q.empty()){

        //pega próximo elemento da fila
        x = q.front().first;
        y = q.front().second;
        q.pop();

        for(auto mv : moves){
            mvx = mv.first;
            mvy = mv.second;
            if(isValid(x + mvx,y + mvy,n,m)){

                q.push({x+mvx,y+mvy});
                mat[x+mvx][y+mvy] = '*';

                path[x+mvx][y+mvy] = {x,y};

                if(mat[x+mvx][y+mvy] == 'B'){
                    return 0;
                }
            }
        }        
    }

    return 0;
}

int main(){

    int n,m;cin>>n>>m;
    int a,b,enda,endb;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> mat[i][j];
            if(mat[i][j]=='A'){
                a=i;b=j;
            }
            else if(mat[i][j] == 'B'){
                enda = i;endb = j;
            }
        }
    }

    bfs(a,b,n,m);
    
    int pa,pb;
    vector<char> caminho;

    if(mat[enda][endb] == '*'){
        cout << "YES\n";
        while(enda != a || endb != b){
            pa = path[enda][endb].first;
            pb = path[enda][endb].second;

            if(enda < pa){
                caminho.push_back('U');
            }
            else if(enda>pa){
                caminho.push_back('D');
            }

            if(endb < pb){
                caminho.push_back('L');
            }
            else if(endb>pb){
                caminho.push_back('R');
            }

            enda = pa;
            endb = pb;
        }

        cout << caminho.size() << endl;
        for(int i=caminho.size()-1;i>=0;i--){
            cout << caminho[i];
        }
        cout << endl;
    }
    else{
        cout << "NO\n";
    }
    
    return 0;
}