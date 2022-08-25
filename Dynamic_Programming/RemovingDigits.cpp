//CSES REMOVING DIGITS

#include <bits/stdc++.h>

using namespace std;

#define INF 1e9
#define ll long long

int main(){
    int n,aux;cin>>n;

    vector<int> digits(n+1,INF);
    digits[0] = 0;

    for(int i=1;i<=n;i++){

        for(char c : to_string(i)){
            
            aux = digits[i - (c-'0')]+1;
            
            if(aux < digits[i]){
                digits[i] = aux;
            }
        
        }

    }

    cout << digits[n] << endl;
    return 0;
}
