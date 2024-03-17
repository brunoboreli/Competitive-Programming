#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
    int tc;
    double q, p, aq;
    scanf("%d", &tc);
    while(tc--){
        scanf("%lf %lf", &q, &p);
        aq += q*p;
    }
    printf("%lf\n", aq);
}