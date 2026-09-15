#include<stdio.h>
using namespace std;
int main(){

int n;
scanf("%d",&n);
int arr[n] ;
for(int i =0;i<n;i++){
    scanf("%d",&arr[i]);
}
int low = 0;
int high = n-1;
int target ;
scanf("%d",&target);
bool found = false;
while(low <= high)
{
    int mid = (low + high) / 2;

    if(arr[mid]== target)
    {
        found = true;
        printf("%d",mid);
        break;
    }
    else if(arr[mid]<target)
    {
        low = mid+1;
    }
    else
    {
        high = mid -1;
    }
}
if(found==false){
    printf("not found");
}


}

