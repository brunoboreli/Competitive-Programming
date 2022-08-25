//CSES TRAFFIC LIGHTS
#include <bits/stdc++.h>

using namespace std;

#define ll long long
 
 
int main(){
    ll n,k,aux;
    ll best=0,maxt;

    cin >> n >> k;
    set<ll> s;
    multiset<ll> s2;

    s.insert(0);
    s.insert(n);

    ll in,h,val;
    for(int i=0;i<k;i++){
        cin >> aux;

        auto high = s.upper_bound(aux);
        h = *high;
        in = *(--high);

        val = h-in;


        if(i>0){
            s2.erase(s2.find(val));
        }

        s2.insert(aux-in);
        s2.insert(h-aux);

        best = *s2.rbegin();
        cout << best << endl;
        s.insert(aux);
    }
	
 return 0;
}