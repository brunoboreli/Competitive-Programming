//COLLECTING NUMBERS 2
#include <bits/stdc++.h>

using namespace std;

#define ll long long
 
 
int main(){

    int n,k,aux;

    cin >> n >> k;

    vector<int> arr;
    map<int,int> idxnum;

    for(int i=0;i<n;i++){
        cin >> aux;
        arr.push_back(aux);
        idxnum[aux] = i;
    }

    ll rounds = 1;
    for(int i = 0;i<n;i++){
        if((i < idxnum[arr[i]-1])){
            rounds++;
        }
    }


    int a,b;
    while(k--){
        cin >> a >> b;
        //swap(arr[a-1],arr[b-1]);

        if(arr[a-1] > arr[b-1]){
            if((idxnum[arr[a-1]] > idxnum[arr[b-1]]) && (idxnum[arr[b-1]] > idxnum[arr[b-1]-1])){
                rounds++;
                cout << " a " <<rounds << endl;
            }
            else{
                rounds--;
                cout << " b " << rounds << endl;
            }
        }
        else if(arr[a-1] < arr[b-1]){
            if(idxnum[arr[a-1]] < idxnum[arr[b-1]]){
                rounds++;
                cout << " c " << rounds << endl;
            }
            else{
                rounds--;
                cout <<" d " << rounds << endl;
            }
        }
        else{
            cout << rounds << endl;
        }

        swap(arr[a-1],arr[b-1]);
        aux = idxnum[arr[a-1]];
        idxnum[arr[a-1]] = idxnum[arr[b-1]];
        idxnum[arr[b-1]] = aux;
        
    }
    
	
	
 return 0;
}