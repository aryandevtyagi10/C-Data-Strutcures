#include <stdio.h>
void fun (int arr[]){
    int temp = arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    return;
}
int main (){
int arr[5]={24,48,72,96,120};
printf ("%d %d\n",arr[0],arr[1]);
fun (arr);
printf("%d %d\n",arr[0],arr[1]);
    return 0;
}
//note: int arr[5] has total 5 elements size==elements
// arr [27] means 28th element in the array
// arr[0]--> 1st element 
//arr[n] --> n+1th element