 #include <stdio.h>
int main (){
int i,j,k=0,rows;
printf ("Enter numnber of rows : ");
scanf ("%d",&rows);
for (i=1;i<=rows;i++){
if (rows%2==0)
   {
   if (i<=rows/2) k++;
   if (i>rows/2 +1) k--;//note
   }
   else 
    i<=(rows+1)/2?k++:k--;   
        for (j=1;j<=(rows+1)/2;j++){
        if (j<=k)
         printf ("*");
        else 
        printf (" ");
    }
printf ("\n");
}
  return 0;
}
/* Pattern 
*
**
****
***
**
*
*/