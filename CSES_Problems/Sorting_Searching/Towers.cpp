//CSES TOWERS
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

    int n;
    cin >> n;

    vector<ll> arr;
    multiset<ll> s;
    ll aux;

    for(int i=0;i<n;i++){
        cin >>aux;
        arr.push_back(aux);
    }

    ll towers=0;
    for(int i=0;i<n;i++){

        auto acha = s.upper_bound(arr[i]);
        if(acha==s.end()){
            //cout << " in " << arr[i] << endl;
            s.insert(arr[i]);
            towers++;
        }
        else{
            if(s.size()>0){
                s.erase(s.find(*acha));
            }   
            s.insert(arr[i]);
            
        }
        /*for(auto x: s){
            cout << x << " ";
        }
        cout << endl;
        cout << " t " << towers << endl;*/
    }

    cout << towers<< endl;



    return 0;
}