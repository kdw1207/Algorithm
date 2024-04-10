#include <stdio.h>

int main() {
    int n, t[1002], p[1002], dp[1002];
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d %d", &t[i], &p[i]);
    }

    for (int i=n-1; i>=0; i--) {
        int pos = i + t[i];
        if (pos <= n){
            dp[i] = (dp[pos] + p[i]) > dp[i + 1] ? (dp[pos] + p[i]) : dp[i + 1]; // 그 날 상담을 하거나 하지 않는 경우 중 최대 이익 선택
        }
        else{
            dp[i] = dp[i + 1];
        }
    }

    printf("%d\n", dp[0]);

    return 0;
}
