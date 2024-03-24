#include <stdio.h>

int s(int x){
    return x*x;
}

int main(void){
    int n, x1, y1, x2, y2, r1, r2;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        
        if(x1 == x2 && y1 == y2){
            if(r1 != r2){
                printf("0\n");
            }
            else{
                printf("-1\n");
            }
        }
        else{
            int a = s(x2-x1) + s(y2-y1);

            if(a<s(r1+r2) && a>s(r1-r2)){
                printf("2\n");
            }
            else if(a==s(r1-r2) || a==s(r1+r2)){
                printf("1\n");
            }
            else{
                printf("0\n");
            }
        }
    }
    
    return 0;
}