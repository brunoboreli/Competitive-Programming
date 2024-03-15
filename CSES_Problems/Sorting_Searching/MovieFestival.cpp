#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool comp(const pair<ll,ll> &a,const pair<ll,ll> &b){
    return a.second < b.second;
}
 
int main(){
    
    int n;
    ll a,b;
    vector<pair<ll,ll>> arr;
    cin >> n;

    while(n--){
        cin >> a >> b;
        //tam = b-a;

        arr.push_back(make_pair(a,b));

    }

    sort(arr.begin(),arr.end(),comp);

    ll count = 1,best=0,armaz;
    armaz = arr[0].second;

    for(int i=0;i<arr.size();i++){
        //cout << arr[i].first << " " << arr[i].second << endl;

        //cout << "armaz " << armaz << " count " << count << endl;
        if(i>0 && (arr[i].first >= armaz)){
            count++;
            armaz = arr[i].second;
        }
        
        if(count > best){
            best = count;
        }
    }

    cout << best << endl;
    

    
    
	
	
 return 0;
}