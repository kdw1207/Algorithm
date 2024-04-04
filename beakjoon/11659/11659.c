#include <stdio.h>

int arr[100005];

int main(){
    int n, t;
    int a, b;

    scanf("%d %d", &n, &t);

    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        arr[i] += arr[i-1];
    }

    for(int i=0;i<t;i++){
        scanf("%d %d",&a,&b);

        printf("%d\n",arr[b]-arr[a-1]);
    }

    return 0;
}