//PALINDROME REORDER
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
	
	string str;
    int par=0;
    getline(cin,str);
 
    int len = str.length();
    
    if(len % 2 == 0){
        par=1;
    }
 
    map<char,int> store;
 
    for(int i=0; i<str.length(); i++){
        store[str[i]]++;
    }
 
    int impcount = 0;
    char imp;
    for (auto x : store) {
        //cout << x.first << " " << x.second << "\n";
 
        if((par && (((x.second)%2)!=0)) || impcount>1){
            cout << "NO SOLUTION\n";
            return 0;
        }
 
        if((((x.second)%2)!=0)){
            imp = x.first;
            impcount++;
        }
 
    }
 
    deque<char> res;
    while(store[imp] != 0){
        res.push_back(imp);
        store[imp]--;
    }
 
 
    for (auto x : store) {
        
        while(x.second!=0){
            res.push_back(x.first);
            res.push_front(x.first);
            x.second -=2;
        }
 
    }
    
 
    for(int i=0;i<res.size();i++){
        cout << res[i];
    }
    cout << endl;
 
 
 
return 0;
}