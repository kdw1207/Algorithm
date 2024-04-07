#include <stdio.h>

int r[1000], ch[1000];

void dfs(int n, int m, int c, int cut);

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    dfs(n, m, 0, 0);

    return 0;
}

void dfs(int n, int m, int c, int cut){
    if(c == m){
        for(int i=0; i<m; i++){
            printf("%d ", r[i]);
        }
        printf("\n");
    }
    else{
        for(int i=1; i<=n; i++){
            if(ch[i] == 0 && cut < i){
                r[c] = i;
                ch[i] = 1;
                dfs(n, m, c+1, i);
                ch[i] = 0;
            }
        }
    }
}