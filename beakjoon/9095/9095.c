#include <stdio.h>

int sum(int n);

int main(){
    int t, n;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf("%d", &n);
        printf("%d\n", sum(n));
    }
}

int sum(int n){
    if(n < 0) return 0;
    else if(n <= 1) return 1;
    else return sum(n-1) + sum(n-2) + sum(n-3);
}