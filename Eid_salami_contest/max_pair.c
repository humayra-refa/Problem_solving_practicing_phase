#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);   
    
    while(T--) {
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z);
        
        int pairs_13 = (X < Z) ? X : Z;  
        int pairs_22 = Y / 2;             
        
        int total_pairs = pairs_13 + pairs_22;
        printf("%d\n", total_pairs);
    }
    
    return 0;
}