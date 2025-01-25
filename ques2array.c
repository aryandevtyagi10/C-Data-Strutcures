#include<stdio.h>
int main (){
    int i,x=10,count =0;
int arr[10]= {2,4,6,8,10,12,14,16,18,20};
for ( i=0;i<=9;i++){
    if (arr[i]>x)
    count++;
}
printf ("%d",count);   
return 0;
}