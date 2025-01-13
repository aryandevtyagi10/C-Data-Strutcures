#include<stdio.h>
void swap(int *a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[], int st,int ed){
    int pivot=arr[st];
    int count=0;
    for(int i=st+1;i<=ed;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotidx=count+st;
    swap(&arr[st],&arr[pivotidx]);
    int i=st;
    int j=ed;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<pivot){
            i++;
            }
        else if(arr[j]>pivot){
                j--;
            }
    else if(arr[i]>pivot && arr[j]<pivot){
          swap(&arr[i],&arr[j]);
          i++;
          j--;
    }
    }
    return pivotidx;
}
void quick_sort(int arr[],int st,int ed){
    if(st>=ed) return;
    int pi=partition(arr,st,ed);
    quick_sort(arr,st,pi-1);
    quick_sort(arr,pi+1,ed);
}
int main(){
int arr[]={1,4,5,8,2,0,71,69};
   int m=sizeof(arr)/sizeof(arr[0]);
   quick_sort(arr,0,m-1);
   for(int i=0;i<m;i++){
    printf("%d ",arr[i]);
   }
}