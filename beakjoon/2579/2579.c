#include <stdio.h>

int s[301];

int main(){
    int n, count;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &s[i]);
    }
    
    int sum[n];
    sum[0] = 0;
    sum[1] = s[1];
    sum[2] = s[1] + s[2];
    
    for(int i=3; i<=n; i++){
        sum[i] = s[i] + (sum[i-2]>s[i-1]+sum[i-3]? sum[i-2]:s[i-1]+sum[i-3]);
    }

    printf("%d\n", sum[n]);

    return 0;
}