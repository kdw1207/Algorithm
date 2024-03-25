#include <stdio.h>

void fibonacci(int n);

int main(void){
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int n;
        scanf("%d", &n);
        fibonacci(n);
    }

    return 0;
}

void fibonacci(int n){
    int fibo[n+1][2];

    fibo[0][0] = 1; fibo[0][1] = 0;
    fibo[1][0] = 0; fibo[1][1] = 1;

    for(int i=2; i<n+1; i++){
        fibo[i][0] = fibo[i-1][0] + fibo[i-2][0];
        fibo[i][1] = fibo[i-1][1] + fibo[i-2][1];
    }
        
    printf("%d %d\n", fibo[n][0], fibo[n][1]);
}