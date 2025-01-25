#include<stdio.h>
void fun (int arr[]){ // void fun (int x[])
    arr[0]=10; //x [0]=20;
    return;   // it will still work due to
            // concept of pass by refernece
}
int main ()
{
int arr[5]= {1,2,3,4,5};
printf ("%d",arr[0]);
fun (arr);
printf ("\n%d",arr[0]);
return 0;
}
//passing array to a function