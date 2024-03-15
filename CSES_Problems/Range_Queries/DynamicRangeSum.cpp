#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
const int MAXN = 10000000;
 
 
ll a[MAXN];
ll seg[4*MAXN];
 
//build segtree
void build(ll noatual, ll i, ll j){
    if(i == j){
        seg[noatual] = a[i];
    }
    else{
 
        ll m = (i+j)/2;
        
        build(2 * noatual, i,m);
        build(2 * noatual + 1, m+1,j);
        seg[noatual] = seg[2 * noatual] + seg[2*noatual+1];
    
    }
}
 
//consulta
// i j é o intervalo do nó atual
// l r é o intervalo da consulta
ll query(ll noatual, ll i, ll j, ll l, ll r){
    if(i >= l && j <= r) return seg[noatual];
 
    //verificar se o noatual esta totalmente fora do intervalo
    if(j < l || i > r) return 0;
    
    ll m = (i+j)/2;
 
    ll L = query(2 * noatual, i, m, l , r);
    ll R = query(2 * noatual + 1, m+1, j, l , r);
 
    return L+R;
}
 
 
void update(ll noatual, ll i, ll j, ll id, ll v){
    if(i == j){
        // no folha, atualiza
        seg[noatual] = v;
    }
    else{
        ll m = (i+j)/2;
        if(id <= m) update(2*noatual, i, m, id, v);
        else update(2*noatual+1, m+1, j, id, v);
 
        seg[noatual] = seg[2*noatual] + seg[2*noatual+1];
    }
}
 
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
 
    ll n,q;cin >> n >> q;
    for(ll i=1;i<=n;i++){
        cin >> a[i];
    }
 
    build(1,1,n);
 
    ll op, x, y;
    for(ll i=0;i<q;i++){
        cin >> op >> x >> y;
        if(op == 1){
            update(1, 1, n, x, y);
        }
        else{
            cout << query(1,1,n,x,y) << endl;
        }
    }
 
 
    return 0;
}