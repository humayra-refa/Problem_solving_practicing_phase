#include<stdio.h>
#include<math.h>
int main(){
    float A,n,t,P,r;
    printf("Enter the principal : ");
    scanf("%f",&P);
    printf("Enter the time : ");
    scanf("%f",&t);
    printf("Enter number of times compounded per year : ");
    scanf("%f",&n);
    printf("Enter rate : ");
    scanf("%f",&r);
    r = r/100;

    A = P *pow(1+r/n,n*t);
    printf("The calculated compound interest is : %f",A);
}
