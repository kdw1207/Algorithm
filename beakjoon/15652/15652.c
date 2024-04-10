#include <stdio.h>

int r[1000];

void dfs(int n, int m, int c, int cut);

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    dfs(n, m, 0, 1);

    return 0;
}

void dfs(int n, int m, int c, int cut){
    if(c == m){
        for(int i=0; i<m; i++){
            printf("%d ", r[i]);
        }
        printf("\n");
        return;
    }
    for(int i=cut; i<=n; i++){
        r[c] = i;
        dfs(n, m, c+1, i);
    }
}