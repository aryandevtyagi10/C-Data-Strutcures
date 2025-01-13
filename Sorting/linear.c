#include<stdio.h>
int main(){
    int arr[100];
    int n;
    int idx;
    int flag=0;
    printf("the size of the array\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the element no %d",i+1);
        scanf("%d",&arr[i]);
    }
    int target;
    printf("enter the elemnt to be searched\n");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
         idx=i;
         flag=1;
         break;
        }
    }
    if(flag==0){
        printf("element not found!");
    }
    else{
        printf("element found at index %d",idx);
    }
}
