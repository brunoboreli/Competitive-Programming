#include <iostream>

using namespace std;

int main(){
    int n, v;
    cin >> n >> v;
    int list[] = {};

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        list[i] = a;
    }

    sort(list, list+n);

    cout << binary_search(list, list+n, v) << endl;
}