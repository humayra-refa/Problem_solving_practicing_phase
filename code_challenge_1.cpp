#include<iostream>
using namespace std;
int main(){
int arr[] = {4, 7, 2, 7, 9, 7, 3};
    int n=7;
    bool found = false;
    int target = 7;
    for(int i = 0; i<n;i++){
        if(target==arr[i]){
            found = true;
            printf("occurrence at index %d\n",i);

        }
    }
    if(found == false){
        printf("not found");
    }
}
