#include <stdio.h>

long res[101] = {0, 1, 1, 1, 2, 2};

int main(){
    int t, n;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d", &n);
        for(int i=6; i<=n; i++){
            if(res[i] > 0) continue;
            else res[i] = res[i-5] + res[i-1];
        }
        printf("%ld\n", res[n]);
    }

    return 0;
}