#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int a,b;
    while(scanf("%d %d", &a, &b) != EOF){
        cout << 2 * a * b << endl;
    }
}
