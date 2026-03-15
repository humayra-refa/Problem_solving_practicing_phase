#include<stdio.h>
int main ()
{
        int M,N,z,k;
        scanf("%d %d",&M,&N);
        if(M==N){
            z=20*N;
            printf("%d",z);

        }else {
            k=20*N - 30*(M-N);
            printf("%d",k);
        }

    return 0 ;
}