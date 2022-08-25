//CSES JOSEPHUS PROBLEM I
#include <bits/stdc++.h>

using namespace std;

#define ll long long
 
 
int main(){
    int n,aux;
    cin >> n;

    vector<int> arr;
    for(int i=1;i<=n;i++){
        arr.push_back(i);        
    }

    int p = 0;
    while(arr.size() > 0){
        
        p++;
        if(p == arr.size()-1){
            cout << arr[p] << endl;
            arr.erase(arr.begin()+p);
            p = 0;
        }
        cout << arr[p] << endl;
        arr.erase(arr.begin()+p);
            
        
    }

    cout << endl;
	
 return 0;
}