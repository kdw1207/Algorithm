#include <stdio.h>

int main(){
    int n;
    int a[1005]={1,1};

    scanf("%d",&n);

    for(int i=2;i<=n;i++)
        a[i] = (a[i-1] + a[i-2])%10007;

    printf("%d\n",a[n]);

    return 0;
}