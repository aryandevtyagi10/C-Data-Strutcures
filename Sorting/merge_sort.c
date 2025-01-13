#include<stdio.h>
void merge(int arr1[],int m,int n,int arr2[],int arr3[]){
    int a=0;int b=0;int c=0;
    while(a<m && b<n){
        if(arr1[a]<=arr2[b]){
            arr3[c]=arr1[a];
            a++;
            c++;
        }
        else{
          arr3[c]=arr2[b];
          b++;c++;
        }
    }
    while(a<m){
        arr3[c]=arr1[a];
        c++;a++;
    }
    while(b<n){
        arr3[c]=arr2[b];
        c++;
        b++;
    }
    
}
void merge_sort(int arr1[],int m){
    if(m<=1) return;
     int n1=m/2;
     int n2=m-m/2;
     int nums1[n1];
     int nums2[n2];
     for(int i=0;i<n1;i++){
      nums1[i]=arr1[i];
     }
     for(int i=0;i<n2;i++){
      nums2[i]=arr1[i+n1];
     }

     merge_sort(nums1,n1);
     merge_sort(nums2,n2);
     merge(nums1,n1,n2,nums2,arr1);
}
int main(){
   int arr[]={1,4,5,8,2,0,71,69};
   int m=sizeof(arr)/sizeof(arr[0]);
   merge_sort(arr,m);
   for(int i=0;i<m;i++){
    printf("%d ",arr[i]);
   }
}