#include <bits/stdc++.h>

using namespace std;

#define ll long long

 
int main(){
    
    int n;
    ll a,b;
    vector<pair<ll,int>> arr;

    cin >> n;
    while(n--){
        cin >> a >> b;

        arr.push_back(make_pair(a,1));
        arr.push_back(make_pair(b,-1));

    }

    sort(arr.begin(),arr.end());

    ll count = 0,best = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i].second==1){
            count++;
        }
        if(arr[i].second==-1){
            count--;
        }
        
        if(count > best){
            best = count;
        }
    }


    cout << best << endl;
	
	
 return 0;
}