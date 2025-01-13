#include<stdio.h>
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
    int mid=(first+last)/2;
    int flag=-1;
    while(first<=last){
         if(arr[mid]==target){
            flag=mid;
            break;
         }
         else if (arr[mid]<target){
             first=mid+1;
             mid=(first+last)/2;
         }
         else{
            last=mid-1;
            mid=(first+last)/2;
         }
        }
        if(flag==-1){
            printf("item not found!");
                   }
        else{
             printf("item found at idex %d",flag);
            
        }
}