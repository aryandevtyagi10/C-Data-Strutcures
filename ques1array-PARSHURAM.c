#include<stdio.h>
int main (){
int arr[10],n;
printf ("Enter number of Elements: ");
scanf("%d",&n);
printf ("\nEnter Array elements: ");
for(int i=0;i<n;i++)
{
    scanf ("%d",&arr[i]);
}
for ( int i=0;i<n;i++){
if (i%2==0){
arr[i]=arr[i]+10;
}
else 
arr[i]=arr[i]*2;
}
for ( int i=0;i<n;i++){
printf ("%d ",arr[i]);}
    return 0;
}