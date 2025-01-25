#include <stdio.h>
void main ()
{
    int i,j,k=0,n,rows;
    printf ("ENTER NUMBER OF ROWS : ");
    scanf ("%d",&rows);
    n =(rows+1)/2;
    for (i=1;i<=rows;i++){
        if(rows%2==0){
            if (i<=n) k++;
            if (i>n+1) k--;//note
        }
        else 
        i<=n?k++:k--;
        for (j=1;j<=rows;j++){
            if (j>=n+1-k&&j<=n-1+k)//note
            printf ("*");
            else 
            printf (" ");
        }
        printf ("\n");
    }
}
/* Pattern
    *
   ***
  *****
 *******
  *****
   ***
    *   
*/