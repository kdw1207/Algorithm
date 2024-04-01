#include <stdio.h>

int main(){
    int n, m, c = 0;
    scanf("%d %d", &n, &m);
    int arr[101] = {0, };
    arr[0] = 1;

    for(int i=0; i<m; i++){
        int a, b;
        scanf("%d %d", &a, &b);

        if(arr[a-1] == 1 || arr[b-1] == 1){
            arr[b-1] = 1; arr[a-1] = 1;
        }
    }

    for(int i=1; i<n; i++){
        if(arr[i] == 1) c++;
    }

    printf("%d\n", c);

    return 0;
}