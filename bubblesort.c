#include<stdio.h>
void printarray(int* a, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void bubbleSort(int *a, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i+1); 
        for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
        {
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp; 
            }
        }  
    } 
}
 
void bubbleSortadaptive(int *a, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i+1);
        isSorted = 1;
        for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
        {
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                isSorted = 0;
            }
        } 
        if(isSorted){
            return;
        }
    } 
}
 
int main(){
    // int a[] = {12, 54, 65, 7, 23, 9};
    int a[] = {1, 2, 5, 6, 12, 54, 625, 7, 23, 9, 987};
    // int a[] = {1, 2, 3, 4, 5, 6};
    int n = 11; //size of array
    printarray(a, n); // Printing the array before sorting
    bubbleSort(a, n); // Function to sort the array
    printarray(a, n); // Printing the array before sorting
    return 0;
}