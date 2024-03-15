//CSES PLAYLIST
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
 
int main(){
    int n;
 
    cin >> n;
    
    vector<ll> arr;
    map<ll,int> m;
 
    ll aux;
    for(int i=0;i<n;i++){
        cin>>aux;

        arr.push_back(aux);
    }
 
    ll longest = 0,count=0;
    int str = 0;
    for(int i=0;i<n;i++){
        if(m.count(arr[i])){
            if((m[arr[i]]+1) > str){
                str = m[arr[i]]+1;
            }
        }
        

        count = (i) - str + 1;
        if(count > longest){
            longest = count;
        }

        m[arr[i]] = i;        
    }
    cout << longest << endl;
	
	
 return 0;
}