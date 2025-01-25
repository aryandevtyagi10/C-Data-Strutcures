#include <stdio.h>
int main (){
    int n,i;
    int arr[n], max = arr[0];
printf ("ENTER SIZE OF ARRAY :");
scanf ("%d",&n);
printf ("ENTER ELEMENTS OF ARRAY:");
for (i=0;i<=n-1;i++){
    scanf("%d",&arr[i]);
}
    for (int i=0;i<=n-1;i++){
    if (arr[i]>max)
    {
       max = arr[i];
    }
         }
 printf (" max value of array = %d",max); 
 return 0;
}
/* find max value for negative values of array 
#include <stdio.h>
#include <limits.h>
int main ()
{
  int arr[7]={-10,-20,-4,-9,-8,-32,-3};
  int max = INT_MIN;
  for (int i=0;i<=6;i++){
  if (max<arr[i]){
    max = arr[i];
  }
}
printf ("%d",max);
return 0;
}
*/