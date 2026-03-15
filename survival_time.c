#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);   
    
    while(T--) {
        int N, X, D;
        scanf("%d %d %d", &N, &X, &D);
        
        int daily_need = 5 * X;  
        int days_with_buns = N / daily_need;  
        
        int total_days;
        if(days_with_buns == 0) {
        
            total_days = D;
        } else {
            total_days = days_with_buns + D;
        }
        
        printf("%d\n", total_days);
    }
    return 0;
}