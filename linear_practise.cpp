#include<iostream>
using namespace std;
int main(){
int arr []= {2, 4, 4, 4, 7, 9, 4, 11};
int target = 4;
int n  = 8;
bool found = false;
for(int i = 0;i<n;i++){
    if(arr[i]== target){
        found = true;
        printf(" First occurrence = %d,",i);
        break;
    }

}
for(int i = 7;i>=0;i--){
    if(arr[i]== target){
        found = true;
        printf(" last occurrence = %d",i);
        break;
    }

}
if(found == false){
    printf("Not found");
}

}
