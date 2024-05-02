#include <stdio.h>

int main(void){
    int n, i;
    long p[91];
    scanf("%d", &n);

    p[0] = 0;
    p[1] = 1;
    p[2] = 1;

    for(i = 3; i<=n; i++){
        p[i] = p[i-1] + p[i-2];
    }
    printf("%ld\n", p[n]);

    return 0;
}