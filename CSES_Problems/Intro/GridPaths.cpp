//CSES - GRID PATHS
#include <bits/stdc++.h>
 
using namespace std;
 
#define N 7
 
string global;
char aux;
long long solutions = 0;
long long turn =0;
bool solveMazeUtil(int maze[N][N], int x, int y,int sol[N][N],int counter);
 
 
// Funcao para verificar validade da posicao
bool isSafe(int maze[N][N], int x, int y)
{
	// if (x, y outside maze) return false
	if (x >= 0 && x < N && y >= 0 && y < N)
		return true;
	return false;
}
 
//Resolve com Backtrack
bool solveMaze(int maze[N][N],int counter)
{
	int sol[N][N] = { { 0, 0, 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0, 0, 0 },
                    { 0, 0, 0, 0, 0, 0, 0 },
                    { 0, 0, 0, 0, 0, 0, 0 },
                    { 0, 0, 0, 0, 0, 0, 0 } };
 
	if (solveMazeUtil(maze, 0, 0, sol,counter) == false) {
		return false;
	}
 
	return true;
}
 
// A recursive utility function to count the solutions to the problem
bool solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N],int counter)
{
	// if (x, y, counter is goal) aumenta num de solucoes
	if ((x == 6 && y == 0)) {
        if(counter == 48){
            sol[x][y] = counter;
		    solutions++;
        
        }
        
        sol[x][y] = 0;
        return false;
 
	}
 
    // Check if maze[x][y] is valid
	if (isSafe(maze, x, y)) {
        
 
        //OTIMIZAÇÃO LIVRO - Caminhos quebrados
        //Prunning the Search - do livro
        if((x==0 || x==6 ) && (sol[x][y+1]==0) && (sol[x][y-1]==0)){
            return false;
        }
 
        if((y==0 || y == 6) && (sol[x+1][y]==0) && (sol[x-1][y]==0)){
            return false;
        }
 
        if((sol[x+1][y]==1 && sol[x-1][y]==1) && ((sol[x][y-1]==0) && (sol[x][y+1]==0)) ){
            return false;
        }
 
        if((sol[x][y+1]==1 && sol[x][y-1]==1) && ((sol[x-1][y]==0) && (sol[x+1][y]==0)) ){
            return false;
        }
 
		// mark x, y as part of solution path
		sol[x][y] = 1;
        aux = global[counter];
        
        counter++;
       
		/* Checando se cada uma das direcoes traz uma solucao válida*/
        if(aux == '?'){
 
            if(sol[x][y+1] == 0){
                solveMazeUtil(maze, x, y+1, sol,counter);
            }
 
            if(sol[x][y-1] == 0){
                solveMazeUtil(maze, x, y-1, sol,counter);
            }
            
            if(sol[x+1][y] == 0){
                solveMazeUtil(maze, x + 1, y, sol,counter);
            }
 
            if(sol[x-1][y] == 0){
                solveMazeUtil(maze, x - 1, y, sol,counter);
            }
 
        }
        else if(aux == 'R'){
            if(sol[x][y+1]==0){
                solveMazeUtil(maze, x, y + 1, sol,counter);
            }
            
        }
        else if(aux == 'L'){
            if(sol[x][y-1] == 0){
                solveMazeUtil(maze, x, y-1, sol,counter);
            }
        }
        else if(aux == 'U'){
            if(sol[x-1][y] == 0){
                solveMazeUtil(maze, x - 1, y, sol,counter);
            }
        }
        else if(aux == 'D'){
            if(sol[x+1][y] == 0){
                solveMazeUtil(maze, x + 1, y, sol,counter);
            }
        }
        
 
		// BACKTRACK: desmarca x, y como parte do caminho solucao
		sol[x][y] = 0; 
		return false;
	}
 
    counter--;
	return false;
}
 
// driver program to test above function
int main()
{
	int maze[N][N] = {{ 1, 1, 1, 1, 1, 1, 1 },
                     { 1, 1, 1, 1, 1, 1, 1 },
                     { 1, 1, 1, 1, 1, 1, 1 },
                     { 1, 1, 1, 1, 1, 1, 1 },
                     { 1, 1, 1, 1, 1, 1, 1 },
                     { 1, 1, 1, 1, 1, 1, 1 },
                     { 1, 1, 1, 1, 1, 1, 1 }};
    int counter = 0;
    getline(cin,global);
 
	solveMaze(maze, counter);
    cout << solutions <<  endl;
	return 0;
}