#include <stdio.h>
int main() {
    int T, N;
    scanf("%d", &T);   
    for(int i = 0; i < T; i++) {
        scanf("%d", &N);   
        if(N == 1 || N % 2 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}