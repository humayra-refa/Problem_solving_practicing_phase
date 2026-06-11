#include<stdio.h>
int main(){
    char ch ;
    int T;
    int arr[50];
    scanf("%c\n%d\n",&ch,&T);
    for(int i  = 0;i<T;i++){
        scanf("%d",&arr[i]);
    }
 for(int i  = 0;i<T;i++){
    for(int j =0;j<arr[i];j++){
        printf("%c",ch);
    }
    printf("\n");
    }


}