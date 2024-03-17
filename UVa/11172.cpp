#include <stdio.h>
using namespace std;

int main(){
    long int n, a, b;
    scanf("%ld", &n);
    while(n--){
        scanf("%ld %ld", &a, &b);
        if(a == b) printf("=\n");
        else if(a > b) printf(">\n");
        else printf("<\n");
    }
}