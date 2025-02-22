#include<stdio.h>
#include<stdlib.h>
int binary_search(int arr[],int first,int last,int target){
      int mid=(first+last)/2;
      if(target==arr[mid]){
        return mid;
      }
      else if(target<arr[mid]){
         return binary_search(arr,0,mid-1,target);
      }
      else if(target>arr[mid]){
          return binary_search(arr,mid+1,last,target);
      }
      return -1;
}
int main(){
int arr[100];
    int n,target;
    printf("ENTER THE SIZE OF THE ARRAY");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE TARGET");
    scanf("%d",&target);
    int first=0;
    int last=n-1;
    int loc=binary_search(arr,first,last,target);
    if(loc==-1){
           printf("item not found!");
    }
    else{
        printf("item found at idex %d",loc);
    }
}