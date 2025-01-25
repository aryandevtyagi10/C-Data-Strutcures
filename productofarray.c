#include<stdio.h>
int main ()
{ int n,i;
printf ("ENTER SIZE OF ARRAY : ");
scanf ("%d",&n);
int arr[n];
printf ("ENTER ELEMENTS OF ARRAY :");
for (i=0;i<n;i++){
 scanf ("%d",&arr[i]);
}
int p =1;
for (i=0;i<n;i++)
   {
    p = p*arr[i]; 
    }
printf ("PRODUCT OF ARRAY = %d",p);
    return 0;
}