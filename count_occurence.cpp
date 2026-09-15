#include<iostream>
using namespace std;
int main(){
int arr[] = {1, 2, 2, 3, 2, 4};
int target = 2;
int n=6;
int count = 0;
bool found = false;
for(int i =0;i<n;i++){
    if(arr[i]==target){
        found = true;
        count++;

    }

}
printf("%d",count);
if(found == false){
    printf("not found");
}


}

