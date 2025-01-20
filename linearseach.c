#include <stdio.h>  
  
int linearSearch(int arr[], int n, int target) {  
    int i;  
    for (i = 0; i< n; i++) {  
        if (arr[i] == target){  
            return i; 
        }  
    }  
    return -1;
}  
int main(){  
    int arr[5],num,target;
    printf("Enter number of elements:");
    scanf("%d",&num);
    printf("Enter elements:");
    for (int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);  
    printf("Enter element to be found");
    scanf("%d",&target);
    int result = linearSearch(arr, n, target);  
    if (result == -1){  
    printf("Element not found in the array.\n");  
    } else {  
    printf("Element found at index: %d\n", result);  
    }  
    return 0;  
}  