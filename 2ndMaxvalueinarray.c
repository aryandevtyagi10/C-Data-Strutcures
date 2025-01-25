#include <stdio.h>
int main (){  
    int n, arr[n];
  int  i,max = arr[0],smax= arr[0];
printf ("ENTER SIZE OF ARRAY :");
scanf ("%d",&n);
printf ("ENTER ELEMENTS OF ARRAY:");
for (i=0;i<n;i++)
{
    scanf("%d",&arr[i]);       //cant understand it
}
    for (int i=0;i<n;i++)      //do again
    {
    if (arr[i]>smax && arr[i]!=max)
    {
       smax = arr[i];
    }
    }
 printf (" max value of array = %d",smax); 
 return 0;
}