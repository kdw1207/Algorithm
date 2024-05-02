#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(void){
    int n, count = 0;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);

    qsort(a, n, sizeof(int), compare);

    int l = 0, r = n-1;
    while(l < r){
        if(a[l] + a[r] == x){
            count++;
            l++;
            r--;
        }
        else if(a[l] + a[r] < x){
            l++;
        }
        else{
            r--;
        }
    }

    printf("%d\n", count);

    return 0;
}