#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> LIS;
    for (int i = 0; i < n; i++) {
        
        int x;
        cin >> x;
        //encontra o menor elemento maior do que x
        auto it = lower_bound(LIS.begin(), LIS.end(), x);

        if (it == LIS.end()) {//se não existe
            LIS.push_back(x);
        } else {//senão substitui
            *it = x;
        }
    }
    
    cout << LIS.size() << endl;
}