#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int c[n+1];
    c[1]=0; c[2]=c[3]=1;

    for(int i=4; i<n+1; i++){
        int a;
        a = c[i-1];
        
        if(i%3==0 && c[i/3]<a){
            a = c[i/3];
        }
        if(i%2==0 && c[i/2]<a){
            a = c[i/2];
        }
        c[i] = a+1;
    }

    printf("%d\n", c[n]);

    return 0;
}