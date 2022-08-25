//CSES COLLECTING NUMBERS
#include <bits/stdc++.h>

using namespace std;

#define ll long long
 
 
int main(){
    int n,aux;

    cin >> n;

    vector<int> arr;
    map<int,int> idxnum;

    for(int i=0;i<n;i++){
        cin >> aux;
        arr.push_back(aux);
        idxnum[aux] = i;
    }

    ll rounds = 1;
    int init = 1,lidx,gidx;
    for(int i = 0;i<n;i++){
        if((i < idxnum[arr[i]-1])){
            rounds++;
        }
    }
    
	cout << rounds << endl;
	
 return 0;
}